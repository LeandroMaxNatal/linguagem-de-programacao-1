// Headers
#include "LevelScreen.h"

/*! Direction enum */
enum Direction { Down, Left, Right, Up };
sf::Vector2i source(1, Down);
int firstImageX = 0, firstImageY = 38,  backgroundSpeed = 0, bgCloudSpeed = 0;
float frameCounter = 0, switchFrame = 100, frameSpeed = 1000;
bool isShot;
float moveSpeed = 10000.0f;

sf::Vector2u currentScreenSize;

/*! Shot sound */
sf::SoundBuffer shotBuffer;
sf::Sound   shotSound;

/* Parallax */
sf::View view;
sf::Vector2f position(screenWidth/2, screenHeight/2);

/* Enemies */
std::list<sf::Sprite> enemy;
std::list<sf::Sprite>::iterator enemyit = enemy.begin(), next;
sf::Texture enemytex;
int erasedEnemies = 0;

/********************************************//**
* \class constructor
***********************************************/
LevelScreen::LevelScreen()
: missel()
{
	/* Empty */
}

/********************************************//**
* \class destructor
***********************************************/
LevelScreen::~LevelScreen()
{
	/* Empty */
}

/********************************************//**
* \load content on screen
***********************************************/
void LevelScreen::LoadContent()
{
	isShot = false;
	keys.push_back( sf::Keyboard::Z );
	keys.push_back( sf::Keyboard::Return );

	/* Set initial screen bounds */
	view.reset(sf::FloatRect(0, 0, screenWidth, screenHeight));
	view.setViewport(sf::FloatRect(0, 0, 1.0f, 1.0f));

	/*! Load helicopter texture */
	if ( !pTexture.loadFromFile("assets/sprites/helicopter_sprite_sheet.png") )
	{
		std::cout << "Could not load PlayerManager image" << std::endl;
	}
	else
	{
		playerImage.setTexture(pTexture);
		currentPlayerPosition = playerImage.getPosition();
		//playerBounds = playerImage.getGlobalBounds();
		//playerImage.setOrigin(playerBounds.width/2, playerBounds.height/2);
	}

	/*! Load screen music */
	if ( !buffer.loadFromFile("assets/sounds/level_theme.ogg") )
	{
		std::cout << "Could not find the menu music" << std::endl;
	}
	else
	{
		/* Initialize and play the sound */
		sound.setBuffer(buffer);
		sound.setLoop(true);
		sound.play();
	}

	/*! Load shot sound */
	if ( !shotBuffer.loadFromFile("assets/sounds/helicopter_shot.ogg"))
    {
        std::cout << "Could not find the shot sound" << std::endl;
    }
    else
    {
        shotSound.setBuffer(shotBuffer);
        shotSound.setLoop(false);
    }

	/*! Load helicopter sound */
	if ( !helicopterBuffer.loadFromFile("assets/sounds/helicopter_sound.ogg") )
    {
        std::cout << "Could not find the helicopter sound" << std::endl;
    }
    else
    {
        /* Initialize and play the helicopter sound */
        helicopterSound.setBuffer(helicopterBuffer);
        helicopterSound.setLoop(true);
        helicopterSound.play();

    }

	/*! Load background image */
	if ( !background.loadFromFile("assets/images/level/background.jpg") )
	{
		std::cout << "Could not find the background image" << std::endl;
	}
	else
	{
		background.setRepeated(true);
		image.setTexture(background);
    }

    /*! Load backgroundCloud image */
    if ( !backgroundClouds.loadFromFile("assets/images/level/clouds.png") )
    {
        std::cout << "Could not find the backgroundCloud image" << std::endl;
    }
    else
    {
            backgroundClouds.setRepeated(true);
            imageClouds.setTexture(backgroundClouds);
    }

	this->GenerateEnemies();
}


/********************************************//**
* \unload screen's content
***********************************************/
void LevelScreen::UnloadContent()
{
	GameScreen::UnloadContent();
}


/********************************************//**
* \update screen content
***********************************************/
void LevelScreen::Update( sf::RenderWindow &Window, sf::Event event )
{
	/* Saves the current screen size in a variable vector2u for use in manipulating the position of the sprites. */
	currentScreenSize = Window.getSize();

	input.Update( event );

	/* Catch window event */
	switch ( event.type )
	{
        case sf::Event::KeyPressed:
            if(event.key.code == sf::Keyboard::Space)
                missel.disparaProjetil(Window);
            //shotSound.play();
            break;
        case sf::Event::Resized:
          Window.setView(sf::View(sf::FloatRect(0, 0, event.size.width, event.size.height)));
          currentScreenSize = Window.getSize();
          //playerImage.get
          break;
		case sf::Event::Closed:
			Window.close();
			break;
    }



    playerBounds = playerImage.getGlobalBounds();

    /* Catch the current position of player and store in a vector2f variable */
    currentPlayerPosition = playerImage.getPosition();

    playerImage.setRotation(0);

    /* Move the player up */
	if ((input.KeyDown(Window, sf::Keyboard::Up) || input.KeyDown(Window, sf::Keyboard::W)) && playerBounds.top > 0)
	{
		source.y = Up;
		playerImage.move(0, -7);
	}
	/* Move the player down */
	if ((input.KeyDown(Window, sf::Keyboard::Down) || input.KeyDown(Window, sf::Keyboard::S))  && (playerBounds.top + playerBounds.height) < currentScreenSize.y)
	{
		source.y = Down;
		playerImage.move(0, 7);
	}
	/* Move the player right */
	if ( ( input.KeyDown( Window, sf::Keyboard::Right ) || input.KeyDown( Window, sf::Keyboard::D ) ) && (playerBounds.left + playerBounds.width) < currentScreenSize.x )
	{
		source.y = Right;
		playerImage.move(7, 0);
		playerImage.setRotation(15);
    }
	/* Move the player left */
	if ( ( input.KeyDown( Window, sf::Keyboard::Left ) || input.KeyDown( Window, sf::Keyboard::A ) ) && playerBounds.left > 0 )
	{
		playerImage.setRotation(-15);
		source.y = Left;
		playerImage.move(-7, 0);
	}

	// Change the sprites
	frameCounter += frameSpeed * clock.restart().asSeconds();
	if ( frameCounter >= switchFrame )
	{
		frameCounter = 0;
		source.x++;

		if( firstImageX > 0 )
			firstImageX = 0;
		else
			firstImageX = 128;
    }

    backgroundSpeed +=1;
    bgCloudSpeed +=2;
}


/********************************************//**
* \enemie's generation
***********************************************/
void LevelScreen::GenerateEnemies()
{
	while( enemyit != enemy.end() )
	{std::cout << "AAAAAAAA" << std::endl;
	    next = enemyit;
	    next++;
	    if ( enemyit->getGlobalBounds().intersects(playerImage.getGlobalBounds()) )
	    {
	        enemy.erase(enemyit);
	        ++erasedEnemies;
	    }
	    enemyit = next;
	}

	if ( !enemytex.loadFromFile("assets/sprites/enemy.png") )
	{
		std::cout << "Could not load PlayerManager image" << std::endl;
	}
	else
	{
		for( int i = 0; i < erasedEnemies; ++i )
		{std::cout << "BBBBBBBB" << std::endl;
		    sf::Sprite tempSprite(enemytex);
		    srand(time(NULL));
		    float y = -200;
		    float x = rand() % 20 + 30;
		    tempSprite.setPosition(x, y);
		    y = y - tempSprite.getGlobalBounds().height * 2;
		    enemy.push_back(tempSprite);
		}
	}
}


/********************************************//**
* \print the screen content
***********************************************/
void LevelScreen::Draw( sf::RenderWindow &Window )
{
	/*! Sets parallax */
	view.setCenter(position);
	Window.setView(view);

	/*! Draw background */
	image.setTextureRect(sf::IntRect(backgroundSpeed, 0, currentScreenSize.x,currentScreenSize.y));
	Window.draw(image);

	/*! Draw background clouds */
	imageClouds.setTextureRect(sf::IntRect(bgCloudSpeed, 0, currentScreenSize.x, currentScreenSize.y));
	Window.draw(imageClouds);

	/*! Draw player sprite */
	playerImage.setTextureRect(sf::IntRect( firstImageX, 0, 128, 47));
	Window.draw( playerImage );

	for ( enemyit=enemy.begin(); enemyit!=enemy.end(); ++enemyit )
	{std::cout << "CCCCCCCCC" << std::endl;
        Window.draw(*enemyit);
    }
}

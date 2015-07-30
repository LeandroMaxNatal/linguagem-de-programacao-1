#include "game.h"

Game::Game()
: mWindow( sf::VideoMode( 640, 480 ), "Meu primeiro Jogo", sf::Style::Close )
//, mTexture()
//, mPlayer()
, mIsMovingUp( false )
, mIsMovingDown( false )
, mIsMovingLeft( false )
, mIsMovingRight( false )
, PlayerSpeed ( 100.f )
, TimePerFrame ( sf::seconds( 1.f / 60.f ) )
, textures ();
, landscape ();
, airplane ();
{
	/*
	if ( !mTexture.loadFromFile( "assets/images/nave.png" ) )
	{
		std::cout << "Erro ao abrir textura" << std::endl;
	}
	mPlayer.setTexture( mTexture );
	mPlayer.setPosition( 100.f, 100.f );
	*/

	/ Try to load resources
	try
	{
		textures.load(Textures::Landscape, "assets/Textures/Desert.png");
		textures.load(Textures::Airplane, "assets/Textures/Eagle.png");
	}
	catch (std::runtime_error& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
		return 1;
	}

	landscape(textures.get(Textures::Landscape));
	airplane(textures.get(Textures::Airplane));

	airplane.setPosition(200.f, 200.f);
}


void Game::run()
{
	// Cria um objeto relogio
	sf::Clock clock;
	// Cria um objeto time o o seta como zero.
	sf::Time timeSinceLastUpdate = sf::Time::Zero;

	while( mWindow.isOpen())
	{
		processEvents();
		timeSinceLastUpdate += clock.restart();
		while( timeSinceLastUpdate > TimePerFrame )
		{
			timeSinceLastUpdate -= TimePerFrame;
			processEvents();
			update( TimePerFrame );
		}
		render();
	}
}


void Game::processEvents()
{
	sf::Event event;
	while(mWindow.pollEvent(event))
	{
		switch( event.type )
		{
			case sf::Event::KeyPressed:
				handlePlayerInput( event.key.code, true );
				break;
			case sf::Event::KeyReleased:
				handlePlayerInput( event.key.code, false );
				break;
			case sf::Event::Closed:
				mWindow.close();
				break;
		}
	}	
}


void Game::update( sf::Time deltaTime )
{
	sf::Vector2f movement(0.f, 0.f);

	// Atualiza a direção que o jogador quer se mover
	if ( mIsMovingUp )
		movement.y -= PlayerSpeed;
	if ( mIsMovingDown )
		movement.y += PlayerSpeed;
	if ( mIsMovingLeft )
		movement.x -= PlayerSpeed;
	if ( mIsMovingRight )
		movement.x += PlayerSpeed;

	// Move o jogador de acordo com o valor atualizado em movement
	airplane.move( movement * deltaTime.asSeconds() );
}


void Game::render()
{
	mWindow.clear();
	mWindow.draw(landscape);
	mWindow.draw(airplane);
	mWindow.display();
}


void Game::handlePlayerInput( sf::Keyboard::Key key, bool isPressed )
{
	if ( key == sf::Keyboard::W )
		mIsMovingUp = isPressed;
	else if ( key == sf::Keyboard::S )
		mIsMovingDown = isPressed;
	else if ( key == sf::Keyboard::D )
		mIsMovingRight = isPressed;
	else if ( key == sf::Keyboard::A )
		mIsMovingLeft = isPressed;
}

/**** ===================================================================[ END of game.cpp ]===================================================================****/
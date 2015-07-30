#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "ResourceHolder.hpp"

// Resource ID for sf::Texture
namespace Textures
{
	enum ID
	{
		Landscape,
		Airplane,
	};
}

class Game
{
public:
	// Construtor
	Game();
	void run();
private:
	void processEvents();
	void update( sf::Time deltaTime );
	void render();

	void handlePlayerInput( sf::Keyboard::Key key, bool isPressed );
private:
	sf::RenderWindow mWindow;
	bool mIsMovingUp, mIsMovingDown, mIsMovingRight, mIsMovingLeft;
	const float PlayerSpeed;
	sf::Time TimePerFrame;
	//sf::Texture mTexture;
	//sf::Sprite mPlayer;

	ResourceHolder<sf::Texture, Textures::ID> textures;
	sf::Sprite landscape;
	sf::Sprite airplane;
};

#endif
/**** ====================================================================[ END of game.h ]====================================================================****/
#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

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
	sf::CircleShape mPlayer;
	bool mIsMovingUp, mIsMovingDown, mIsMovingRight, mIsMovingLeft;
	const float PlayerSpeed;
	sf::Time TimePerFrame;
};

#endif
/**** ====================================================================[ END of game.h ]====================================================================****/
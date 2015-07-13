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
	void update();
	void render();

	void handlePlayerInput( sf::Keyboard::Key key, bool isPressed );
private:
	sf::RenderWindow mWindow;
	sf::CircleShape mPlayer;
	bool mIsMovingUp, mIsMovingDown, mIsMovingRight, mIsMovingLeft;
};

#endif
/**** ====================================================================[ END of game.h ]====================================================================****/
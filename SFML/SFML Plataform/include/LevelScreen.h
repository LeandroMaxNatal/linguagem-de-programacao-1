#ifndef LevelScreen_H
#define LevelScreen_H

#include "GameScreen.h"
#include "ScreenManager.h"
#include <iostream>
#include <list>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Projectile.h"

class LevelScreen : public GameScreen
{
	/*!
     * Public section
	*/
	public:
		/*! Functions */
		LevelScreen();
		~LevelScreen();

		void LoadContent(); // Load the content on the screen
		void UnloadContent(); // Unload the content on the screen
		void Update( sf::RenderWindow &Window, sf::Event event ); // Update the screen content
		void Draw( sf::RenderWindow &Window ); // Print the content on the screen

		void GenerateEnemies();
	/*!
     * Protected section
	*/
	protected:

	/*!
     * Private section
	*/
	private:
		/*! Attributes */

		/* Background */
		sf::Texture     background, backgroundClouds;
		sf::Sprite      image, imageClouds;

        /* Time handle */
		sf::Clock       clock;

		/* Sound */
		sf::SoundBuffer buffer;
		sf::SoundBuffer helicopterBuffer;
		sf::Sound       sound;
		sf::Sound       helicopterSound;

		/* Player */
		sf::Texture     pTexture;
		sf::Sprite      playerImage;
		sf::Vector2f    currentPlayerPosition;
		sf::FloatRect   playerBounds;
        Projectile      missel;

        /* General settings */
		int level;
};

#endif // LevelScreen_H

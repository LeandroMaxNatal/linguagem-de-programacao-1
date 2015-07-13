#include "game.h"

Game::Game()
: mWindow(sf::VideoMode(640,480), "Meu primeiro Jogo")
, mPlayer()
{
	mPlayer.setRadius(40.f);
	mPlayer.setPosition(100.f, 100.f);
	mPlayer.setFillColor(sf::Color::Cyan);
}


void Game::run()
{
	while( mWindow.isOpen())
	{
		processEvents();
		update();
		render();
	}
}


void Game::processEvents()
{
	sf::Event event;
	while(mWindow.pollEvent(event))
	{
		if( event.type == sf::Event::Closed )
			mWindow.close();
	}	
}


void Game::update()
{
	/* Vazio por enquanto */
}


void Game::render()
{
	mWindow.clear();
	mWindow.draw(mPlayer);
	mWindow.display();
}
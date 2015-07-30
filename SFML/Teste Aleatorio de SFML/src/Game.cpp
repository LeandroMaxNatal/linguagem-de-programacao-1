#include "Game.h"

Game::Game()
: Window(sf::VideoMode(640,480), "Teste SFML", sf::Style::Close)
{
    //ctor
}

Game::~Game()
{
    //dtor
}

void Game::run()
{
    while(Window.isOpen())
    {
        ProcessEvents();
        Update();
        Render();
    }
}

void Game::ProcessEvents()
{
    sf::Event Event;
    while(Window.pollEvent(Event))
    {
        switch(Event.type)
        {
            case sf::Event::Closed:
                Window.close();
                break;
        }
    }
}

void Game::Update()
{
    /* Code */
}

void Game::Render()
{
    Window.clear();
    Window.display();
}

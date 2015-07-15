#include <SFML/Graphics.hpp>
#include "ScreenManager.h"
#include <iostream>

int main()
{
    sf::RenderWindow Window(sf::VideoMode(ScreenWidth,ScreenHeight, 32), "Coding Made Easy Platformer");

    while(Window.isOpen())
    {
        sf::Event event;
        while(Window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape)
                Window.close();
            Window.clear();
            Window.display();
        }
    }
    std::cin.get();
    return EXIT_SUCCESS;
}

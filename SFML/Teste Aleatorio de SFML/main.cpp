#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    // Create a window with the same pixel depth as the desktop
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();

    std::cout << "Width = " << desktop.width << ", Height = " << desktop.height << std::endl;
    sf::RenderWindow window(sf::VideoMode(desktop.width, desktop.height, desktop.bitsPerPixel), "SFML window");

    while(window.isOpen())
    {
        sf::Event event;

        while(window.pollEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::K
                    if (event.key.code == sf::Keyboard::A)
                        std::cout<< "O usuario digitou a letra A" << std::endl;
                    else if(event.key.code == sf::Keyboard::Escape)
                        window.close();
                    break;
                case sf::Event::Closed:
                    window.close();
                    break;
            }

        }

        window.clear();
        window.display();
    }
    return EXIT_SUCCESS;
}

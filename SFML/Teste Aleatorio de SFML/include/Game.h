#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

class Game
{
    public:
        Game();
        ~Game();
        void run();

    private:
        void ProcessEvents();
        void Update();
        void Render();

        sf::RenderWindow Window;
};

#endif // GAME_H

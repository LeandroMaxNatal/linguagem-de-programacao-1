#include "Game.hpp"
#include <stdexcept>
#include <iostream>

int main()
{
    try{
        Game game;
        Game.run();
    }
    catch(std::exception& e)
    {
        std::cout << "\nException: " << e.what() << std::endl;
    }
}

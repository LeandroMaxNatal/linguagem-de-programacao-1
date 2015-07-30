#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include <stdexcept>
#include <iostream>

int main()
{
    try{
        Game game;

    }catch( std::exception& e){
        std::cout << "\nException: " << e.what() << std::endl;
    }
}

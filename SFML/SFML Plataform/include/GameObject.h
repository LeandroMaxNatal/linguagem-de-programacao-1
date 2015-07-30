#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
class GameObject
{
    public:
        virtual void            setVelocity(sf::Vector2f velocity);
        virtual void            setVelocity(float vx, float vy);
        virtual sf::Vector2f    getVelocity() const;

    private:
        sf::Vector2f            mVelocity;
};

#endif // GAMEOBJECT_H

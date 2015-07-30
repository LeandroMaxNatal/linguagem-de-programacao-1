#include "GameObject.h"

void GameObject::setVelocity(sf::Vector2f velocity)
{
    this->mVelocity = velocity;
}

void GameObject::setVelocity(float vx, float vy)
{
    this->mVelocity.x = vx;
    this->mVelocity.y = vy;
}

sf::Vector2f GameObject::getVelocity() const
{
    return this->mVelocity;
}



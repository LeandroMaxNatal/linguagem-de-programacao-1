#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "GameObject.h"

class Projectile : public GameObject
{
    public:
        Projectile();
        void loadContents();
        void disparaProjetil(sf::RenderWindow &Window);

   public:
        sf::Texture     projetilTex;
        sf::Sprite      projetilSpr;
        sf::SoundBuffer projetil_SB;
        sf::Sound       projetilSou;
};

#endif // PROJECTILE_H

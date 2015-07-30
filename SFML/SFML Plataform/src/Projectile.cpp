#include "Projectile.h"

Projectile::Projectile()
: projetilTex()
, projetilSpr()
, projetil_SB()
, projetilSou()
{
    std::cout << "Construtor do missel" << std::endl;
    loadContents();
}

void Projectile::loadContents()
{
    if(!projetilTex.loadFromFile("assets/sprites/missel_teste.png"))
        std::cout << "Falha ao ler a imagem do missel" << std::endl;
    else
    {
        projetilSpr.setTexture(projetilTex);
        projetilSpr.setPosition(200.f,200.f);
    }

    if(!projetil_SB.loadFromFile("assets/sounds/helicopter_shot.ogg"))
        std::cout << "Falha ao abrir o som do missel" << std::endl;
    else
    {
        projetilSou.setBuffer(projetil_SB);
    }

}

void Projectile::disparaProjetil(sf::RenderWindow &Window)
{
    std::cout << "Sou o missel e fui disparado" << std::endl;
    projetilSou.play();
    Window.draw(projetilSpr);
    Window.display();


}




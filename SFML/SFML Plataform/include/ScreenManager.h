#ifndef SCREENMANAGER_H
#define SCREENMANAGER_H

#include <iostream>
#include <string>
#include "GameScreen.h"
#include "SplashScreen.h"

#define ScreenWidth 1366
#define ScreenHeight 768
class ScreenManager
{
    public:
        ~ScreenManager();
        static ScreenManager & GetInstance();

        void initialize();
        void LoadContent();
        void Update();
        void Draw(sf::RenderWindow &Window);

    protected:
    private:
        GameScreen *currentScreen, *newScreen;
        ScreenManager();
        ScreenManager(ScreenManager const&);
        void operator=(ScreenManager const&);
};

#endif // SCREENMANAGER_H

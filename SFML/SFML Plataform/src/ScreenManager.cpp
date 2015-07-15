#include "ScreenManager.h"



ScreenManager & ScreenManager::GetInstance()
{
    static ScreenManager instance;
    return instance;
}

ScreenManager::ScreenManager()
{
    //ctor
}

ScreenManager::~ScreenManager()
{
    //dtor
}

void ScreenManager::initialize()
{
    currentScreen = new SplashScreen();
}

void ScreenManager::LoadContent()
{
    currentScreen->LoadContent();
}

void ScreenManager::Update()
{
    currentScreen->Update();
}

void ScreenManager::Draw(sf::RenderWindow &Window)
{
    currentScreen->Draw(Window);
}

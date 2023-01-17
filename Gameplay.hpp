#pragma once
#include "Background.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Crab.hpp"

class Gameplay
{
public:
    Gameplay();

    void run();
    void update(float &dt);
    void draw(sf::RenderWindow &win);
private:
    Background bg;
    Player player;
    Enemy enemy;
    Crab crab;
};
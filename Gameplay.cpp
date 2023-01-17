#include "Gameplay.hpp"

Gameplay::Gameplay()
{}

void Gameplay::run()
{
    player.load("Player.png");
    player.setup();
    player.setupText();
    player.setPosition(sf::Vector2f(1860.0f, 1000.0f));

    enemy.load("Enemy.png");
    enemy.setPosition(sf::Vector2f(450.0f, 1000.0f));

    crab.load("CrabIdle.png");
    crab.setup();
    crab.setPosition(sf::Vector2f(850.0f, 1000.0f));
}

void Gameplay::update(float& dt)
{
    player.move(dt);
    enemy.move(dt);
    crab.move(dt);
}

void Gameplay::draw(sf::RenderWindow& win)
{
    bg.draw(win);
    player.draw(win);
    player.drawText(win);
    enemy.draw(win);
    crab.draw(win);
}
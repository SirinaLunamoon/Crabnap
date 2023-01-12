#include <cmath>
#include "Background.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Crab.hpp"

int main()
{
    const int SCREEN_WIDTH = 1920;
    const int SCREEN_HEIGHT = 1080;
    std::string title = "Crabnap";

    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), title);
    sf::Clock gameClock;
    float dt{0.0f};

    Background bg;
    Player player;
    Enemy enemy;
    Crab crab;

    player.load("Player.png");
    player.setup();
    player.setupText();
    player.setPosition(sf::Vector2f(1860.0f, 1000.0f));

    enemy.load("Enemy.png");
    enemy.setPosition(sf::Vector2f(450.0f, 1000.0f));

    crab.load("CrabIdle.png");
    crab.setup();
    crab.setPosition(sf::Vector2f(850.0f, 1000.0f));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        } //while
        window.clear();

        dt = gameClock.getElapsedTime().asSeconds();
        player.move(dt);
        enemy.move(dt);
        crab.move(dt);
        dt = gameClock.restart().asSeconds();

        bg.draw(window);
        player.draw(window);
        player.drawText(window);
        enemy.draw(window);
        crab.draw(window);

        window.display();
    } //while
    return 0;
}
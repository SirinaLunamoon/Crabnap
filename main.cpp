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

    player.loadImg("Player.png");
    player.setup();

    enemy.loadImg("Enemy.png");
    enemy.setup();

    crab.loadImg("CrabIdle.png");
    crab.setup();

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
        enemy.draw(window);
        crab.draw(window);

        window.display();
    } //while
    return 0;
}
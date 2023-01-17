#include <cmath>
#include "MainMenu.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(gameScreen.width, gameScreen.height), gameScreen.title);
    sf::Clock gameClock;
    float dt{0.0f};

    MainMenu mainMenu;

    mainMenu.setFont("Raleway-Regular");
    mainMenu.setText();

    

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        } //while
        window.clear();

        mainMenu.update(dt, window);

        /*dt = gameClock.getElapsedTime().asSeconds();
        
        dt = gameClock.restart().asSeconds();*/

        mainMenu.drawText(window);
        window.display();
    } //while
    return 0;
}
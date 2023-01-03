#include "../include/Background.hpp"
#include "../include/CrabPlayer.hpp"

int main() 
{
	sf::RenderWindow window(sf::VideoMode(1366, 768), "Crabnap");

	Background bg;
	Crab crab(window);

	sf::Clock gameClock;
	float dt;

	while (window.isOpen())
	{
		sf::Event ev;
		while (window.pollEvent(ev))
		{
			switch (ev.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			default:
				break;
			}
		}
		
		dt = gameClock.getElapsedTime().asSeconds();
		crab.updateMovement(dt);
		crab.updateGrabMouse(&window, ev);
		dt = gameClock.restart().asSeconds();

		window.clear();
		bg.draw(&window);
		crab.draw(&window);
		window.display();
	}

	return 0;
}
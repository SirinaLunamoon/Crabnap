#include "MainMenu.hpp"

MainMenu::MainMenu()
	: m_selected(MainMenuOptions::PLAY)
{																	   
}

void MainMenu::setFont(const std::string& fontName)
{
	m_font.loadFromFile("res/font/menu/" + fontName + ".ttf");
	m_title.setFont(m_font);
	m_play.setFont(m_font);
	m_quit.setFont(m_font);
}

void MainMenu::setText()
{
	m_title.setCharacterSize(80);
	m_title.setFillColor(sf::Color(0, 255, 255));
	m_title.setOutlineThickness(2);
	m_title.setOutlineColor(sf::Color(0, 0, 0));
	m_title.setPosition(sf::Vector2f(gameScreen.width / 2.0f, gameScreen.height / 6.0f));
	m_title.setString("Crabnap");

	m_play.setCharacterSize(50);
	m_play.setFillColor(sf::Color(255, 0, 255));
	m_play.setOutlineThickness(2);
	m_play.setOutlineColor(sf::Color(0, 0, 0));
	m_play.setPosition(sf::Vector2f(gameScreen.width / 2.0f, gameScreen.height / 3.0f));
	m_play.setString("Play");
	
	m_quit.setCharacterSize(50);
	m_quit.setFillColor(sf::Color(255, 255, 0));
	m_quit.setOutlineThickness(2);
	m_quit.setOutlineColor(sf::Color(0, 0, 0));
	m_quit.setPosition(sf::Vector2f(gameScreen.width / 2.0f, gameScreen.height / 2.4f));
	m_quit.setString("Exit");
}

void MainMenu::update(float& dt, sf::RenderWindow &win)
{
	dt = m_menuClock.getElapsedTime().asSeconds();

	if (dt > 0.1f)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && m_selected == MainMenuOptions::PLAY)
		{
			m_selected++;
			m_selected = MainMenuOptions::QUIT;
			m_play.setFillColor(sf::Color(255, 255, 0));
			m_quit.setFillColor(sf::Color(255, 0, 255));
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && m_selected == MainMenuOptions::QUIT)
		{
			m_selected++;
			m_selected = MainMenuOptions::PLAY;
			m_quit.setFillColor(sf::Color(255, 255, 0));
			m_play.setFillColor(sf::Color(255, 0, 255));
		}

		dt = m_menuClock.restart().asSeconds();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
	{
		switch (m_selected)
		{
		case 0:
			//TODO: When play button is pressed the gameplay begins
			break;
		case 1:
			win.close();
			break;
		}
	}
}

void MainMenu::drawText(sf::RenderWindow& win)
{
	win.draw(m_title);
	win.draw(m_play);
	win.draw(m_quit);
}

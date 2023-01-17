#pragma once
#include "ExtVariables.hpp"
#include "Graphics.hpp"

class MainMenu : public Graphics
{
public:
	MainMenu();

	enum MainMenuOptions
	{
		PLAY,
		QUIT
	};

	MainMenuOptions menuOption;

	void setFont(const std::string &fontName);
	void setText();
	void update(float &dt, sf::RenderWindow& win);
	void drawText(sf::RenderWindow& win);

private:
	sf::Font m_font;

	sf::Text m_title;
	sf::Text m_play;
	sf::Text m_quit;

	sf::Clock m_menuClock;

	int m_selected;
};
#pragma once
#include <SFML/Graphics.hpp>

class Background
{
public:
	Background();

	void draw(sf::RenderWindow &win);

private:
	sf::Texture m_bgTexture;
	sf::Sprite m_bgSprite;

	sf::Texture m_middleBgTexture;
	sf::Sprite m_middleBgSprite;

	sf::Texture m_fgTexture;
	sf::Sprite m_fgSprite;
};
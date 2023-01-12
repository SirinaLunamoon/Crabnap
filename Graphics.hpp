#pragma once
#include <SFML/Graphics.hpp>

class Graphics
{
public:
	void load(std::string fileName);
	void draw(sf::RenderWindow& win);

public:
	sf::Texture texture;
	sf::Sprite sprite;
};
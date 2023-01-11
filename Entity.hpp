#pragma once
#include <SFML/Graphics.hpp>

class Entity
{
public:
	void loadImg(std::string fileName);
	void draw(sf::RenderWindow &win);

	void setPosition(sf::Vector2f position) {}

protected:
	sf::Texture texture;
	sf::Sprite sprite;
	sf::Vector2f position;
	float speed;
};
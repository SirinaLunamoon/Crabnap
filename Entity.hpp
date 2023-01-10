#pragma once
#include <SFML/Graphics.hpp>

class Entity
{
public:
	void loadImg(std::string fileName);
	void draw(sf::RenderWindow &win);

protected:
	sf::Texture texture;
	sf::Sprite sprite;
	sf::Vector2f position;
	float speed;
};
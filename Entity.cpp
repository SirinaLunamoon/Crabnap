#include "Entity.hpp"

void Entity::loadImg(std::string fileName)
{
	texture.loadFromFile("res/gfx/" + fileName);
	sprite.setTexture(texture);
}

void Entity::draw(sf::RenderWindow& win)
{
	win.draw(sprite);
}
#include "Graphics.hpp"

void Graphics::load(std::string fileName)
{
	texture.loadFromFile("res/gfx/" + fileName);
	sprite.setTexture(texture);
}

void Graphics::draw(sf::RenderWindow& win)
{
	win.draw(sprite);
}
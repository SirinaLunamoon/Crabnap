#pragma once
#include "Graphics.hpp"

class Entity : public Graphics
{
public:
	void setPosition(sf::Vector2f position) { sprite.setPosition(position); }
	sf::Vector2f getPosition() const { return sprite.getPosition(); }

protected:
	sf::Vector2f position;
	float speed;
};
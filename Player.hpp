#pragma once
#include "Entity.hpp"

class Player : public Entity
{
public:
	Player();

	enum Direction
	{
		UP,
		RIGHT,
		DOWN,
		LEFT
	};

	void setup();
	void move(float &dt);
	void updateAnimation(float& dt);

private:
	sf::Vector2i m_frameSize;
};
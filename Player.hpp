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

private:
	void updateAnimation(float& dt);

private:
	sf::Vector2i m_frameSize;
	sf::Clock m_animClock;
};
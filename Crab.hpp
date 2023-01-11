#pragma once
#include "Entity.hpp"

class Crab : public Entity
{
public:
	Crab();

	enum Movement
	{
		IDLE
	};

	void setup();
	void move(float& dt);

private:
	void updateAnimation(float& dt);

private:
	sf::Vector2i m_frameCount;
	sf::Clock m_animClock;
};
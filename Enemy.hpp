#pragma once
#include "Entity.hpp"

class Enemy : public Entity
{
public:
	void setup();
	void move(float &dt);

private:
	void updateAnimation(float& dt);

private:
};
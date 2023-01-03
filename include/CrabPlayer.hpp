#pragma once
#include "RenderObjects.hpp"

class Crab : RenderObjects
{
public:
	Crab(sf::RenderWindow &win);

	enum Direction
	{
		STOP = 0,
		LEFT = 1,
		RIGHT = 2
	};

	Direction dir = Direction::STOP;

	void updateMovement(float &dt);
	void updateGrabMouse(sf::RenderWindow* win, sf::Event ev);
	void draw(sf::RenderWindow* win) override;

private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	sf::Vector2f m_position;
	sf::Vector2f m_scale;
	sf::Vector2i m_mousePosition;
	float m_speed;
};
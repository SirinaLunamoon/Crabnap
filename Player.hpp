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
	void setupText();
	void move(float &dt);

	void drawText(sf::RenderWindow &win);

private:
	void updateAnimation(float& dt);

private:
	sf::Vector2i m_frameSize;
	sf::Clock m_animClock;
	sf::Font m_font;
	sf::Text m_scoreText;
	int m_score;
};
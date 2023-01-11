#include "Crab.hpp"

Crab::Crab() : m_frameCount(1, IDLE)
{}

void Crab::setup()
{
	sprite.setTextureRect(sf::IntRect(0, 0, 78, 72));
	sprite.setPosition(sf::Vector2f(850.0f, 1000.0f));
}

void Crab::move(float& dt)
{
	updateAnimation(dt);
}

void Crab::updateAnimation(float& dt)
{
	m_frameCount.x++;
	if (m_frameCount.x * 79 >= texture.getSize().x)
	{
		m_frameCount.x = 0;
	}

	dt = m_animClock.getElapsedTime().asSeconds();

	if (dt > 0.6f)
	{
		sprite.setTextureRect(sf::IntRect(m_frameCount.x * 79, m_frameCount.y * 73, 79, 73));
		dt = m_animClock.restart().asSeconds();
	}
}
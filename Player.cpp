#include "Player.hpp"

Player::Player()
{
	speed = 120.0f;
}

void Player::setup()
{
	m_frameSize = sf::Vector2i(1, DOWN);
	sprite.setScale(1.6f, 1.6f);
}

void Player::setupText()
{
	m_font.loadFromFile("res/font/score/Architex.ttf");
	m_scoreText.setFont(m_font);
	m_scoreText.setFillColor(sf::Color(255, 255, 255));
	m_scoreText.setCharacterSize(60);
	m_scoreText.setOutlineColor(sf::Color(0, 0, 0));
	m_scoreText.setOutlineThickness(1);
	m_scoreText.setString("Score ");
}

void Player::move(float& dt)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		m_frameSize.y = Direction::UP;
		sprite.move(0.0f, -speed * dt);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		m_frameSize.y = Direction::DOWN;
		sprite.move(0.0f, speed * dt);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		m_frameSize.y = Direction::LEFT;
		sprite.move(-speed * dt, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		m_frameSize.y = Direction::RIGHT;
		sprite.move(speed * dt, 0.0f);
	}

	updateAnimation(dt);
}

void Player::updateAnimation(float& dt)
{
	m_frameSize.x++;
	if (m_frameSize.x * 21 >= texture.getSize().x)
	{
		m_frameSize.x = 0;
	}

	dt = m_animClock.getElapsedTime().asSeconds();

	if (dt > 0.6f)
	{
		sprite.setTextureRect(sf::IntRect(m_frameSize.x * 21, m_frameSize.y * 32, 21, 32));
		dt = m_animClock.restart().asSeconds();
	}
}

void Player::drawText(sf::RenderWindow &win)
{
	win.draw(m_scoreText);
}
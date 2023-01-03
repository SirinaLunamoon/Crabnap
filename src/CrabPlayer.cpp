#include "../include/CrabPlayer.hpp"
#include "../include/Log.hpp"

Crab::Crab(sf::RenderWindow& win)
{
	m_speed = 100.0f;
	m_position = sf::Vector2f(1200.0f, 640.0f);
	m_scale = sf::Vector2f(0.1f, 0.1f);
	//m_mousePosition = win.mapPixelToCoords();

	m_texture.loadFromFile("res/Gfx/Crab.png");
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(m_position);
	m_sprite.setOrigin(m_sprite.getGlobalBounds().width / 2.0f, m_sprite.getGlobalBounds().height / 2.0f);
	m_sprite.setScale(m_scale);
}

void Crab::updateMovement(float& dt)
{
	if (dir == STOP)
	{
		dir = LEFT;
	}
	if (dir == LEFT)
	{
		m_position.x -= m_speed * dt;
		m_sprite.setPosition(m_position.x, m_sprite.getPosition().y);
		if (m_position.x < 10)
		{
			dir = RIGHT;
		}
	}
	if (dir == RIGHT)
	{
		m_position.x += m_speed * dt;
		m_sprite.setPosition(m_position.x, m_sprite.getPosition().y);
		if (m_position.x > 1200)
		{
			dir = LEFT;
		}
	}
}

void Crab::updateGrabMouse(sf::RenderWindow *win, sf::Event ev)
{
	//Log::showInfo("Crab contains the mouse cursor");
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		m_mousePosition = win->mapCoordsToPixel(sf::Vector2f(ev.mouseButton.x, ev.mouseButton.y));
		if (m_sprite.getGlobalBounds().contains(static_cast<sf::Vector2f>(m_mousePosition)))
		{
			Log::showInfo("Mouse button is clicked!");
		}
	}
}

void Crab::draw(sf::RenderWindow* win)
{
	win->draw(m_sprite);
}
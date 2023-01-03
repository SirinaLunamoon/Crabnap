#include "../include/Background.hpp"

Background::Background()
{
	m_texture.loadFromFile("res/Gfx/Bg.png");
	m_sprite.setTexture(m_texture);

	m_bucketTexture.loadFromFile("res/Gfx/BucketRed.png");
	m_bucketSprite[0].setTexture(m_bucketTexture);
	m_bucketSprite[0].setPosition(sf::Vector2f(1080.0f, 640.0f));
}

void Background::draw(sf::RenderWindow *win)
{
	win->draw(m_sprite);
	win->draw(m_bucketSprite[0]);
}
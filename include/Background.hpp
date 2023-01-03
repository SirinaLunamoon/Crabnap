#pragma once
#include "RenderObjects.hpp"

class Background
{
public:
	Background();

	void draw(sf::RenderWindow* win);

private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;

	sf::Texture m_bucketTexture;
	sf::Sprite m_bucketSprite[3];
};
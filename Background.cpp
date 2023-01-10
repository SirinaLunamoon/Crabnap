#include "Background.hpp"

Background::Background()
{
    m_bgTexture.loadFromFile("res/gfx/Bg.png");
    m_bgSprite.setTexture(m_bgTexture);

    m_middleBgTexture.loadFromFile("res/gfx/MiddleBg.png");
    m_middleBgSprite.setTexture(m_middleBgTexture);

    m_fgTexture.loadFromFile("res/gfx/Fg.png");
    m_fgSprite.setTexture(m_fgTexture);
}

void Background::draw(sf::RenderWindow &win)
{
    win.draw(m_bgSprite);
    win.draw(m_fgSprite);
    win.draw(m_middleBgSprite);
}
#include "SpriteNode.hpp"
#include <SFML/Graphics/RenderTarget.hpp>

SpriteNode::SpriteNode(const sf::Texture& texture)
: mSprite(texture)
{
    /* Empty */
}

SpriteNode::SpriteNode(const sf::Texture& texture, const sf::IntRect& textureRect)
: mSprite(texture, textureRect)
{
    /* Empty */
}

void SpriteNode::drawCurrent(sf::RenderTarget& target, sf::RenderStates states)
{
    target.draw(mSprite, states);
}

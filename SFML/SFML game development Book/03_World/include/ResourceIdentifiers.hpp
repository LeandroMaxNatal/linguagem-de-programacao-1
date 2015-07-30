#ifndef RESOURCEIDENTIFIERS_HPP
#define RESOURCEIDENTIFIERS_HPP

// Forward declaration of SFML classes
namespace sf
{
    class Texture;
}

namespace Textures
{
    enum ID
    {
        Eagle,
        Raptor,
        Desert,
    };
}

// Forward declaration and a few type definitions
template <class Resource, class Identifier>
class ResourceHolder;

typedef ResourceHolder<sf::Texture, Textures::ID> TextureHolder;

#endif // RESOURCEIDENTIFIERS_HPP

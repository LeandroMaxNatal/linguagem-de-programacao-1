#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include "Entity.hpp"
#include "ResourceIdentifiers.hpp"
#include "ResourceHolder.h"
#include <SFML/Graphics/Sprite.hpp>


class Aircraft : public Entity
{
	public:
		enum Type
		{
			Eagle,
			Raptor,
		};


	public:
							Aircraft(Type type, const TextureHolder& textures);


	private:
		virtual void		drawCurrent(sf::RenderTarget& target, sf::RenderStates states) const;


	private:
		Type				mType;
		sf::Sprite			mSprite;
};


#endif // AIRCRAFT_H

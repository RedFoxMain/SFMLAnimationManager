#ifndef ANIMATION_H
#define ANIMATION_H

#include <SFML/Graphics.hpp>
#include <string>

class Animation {
public:
	sf::Texture* texture;
	sf::Vector2i sprite_size;
	float switch_time;
	int frame_ammount;

public:
	Animation() = default;
	Animation(sf::Texture* texture, sf::Vector2i sprite_size = {0 , 0},
			  int frame_ammount = 0, float switch_time = 0);
};
#endif // !ANIMATION_H
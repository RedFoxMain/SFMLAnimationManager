#include "Animation.h"

Animation::Animation(sf::Texture* texture, sf::Vector2i sprite_sizes, 
					 int frame_ammount, float switch_time)
: texture(texture), sprite_size(sprite_sizes), frame_ammount(frame_ammount), switch_time(switch_time) {}
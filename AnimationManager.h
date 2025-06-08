#ifndef ANIM_MANAGER_H
#define ANIM_MANAGER_H

#include "Animation.h"

#include <iostream>
#include <string>
#include <map>

class AnimationManager {
private:
	static std::map<std::string, Animation> m_animation_;
	static int curr_index_;
	static float update_time_;

public:
	static void update(const std::string& animation_name, sf::Sprite& sp);
	static void addAnimation(const std::string& animation_name, Animation& anim);
	static void delAnimation(const std::string& animation_name);
};
#endif // !ANIM_MANAGER_H
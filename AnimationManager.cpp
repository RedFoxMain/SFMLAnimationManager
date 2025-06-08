#include "AnimationManager.h"

std::map<std::string, Animation> AnimationManager::m_animation_;
int AnimationManager::curr_index_ = 0;
float AnimationManager::update_time_ = 0;

void AnimationManager::update(const std::string& animation_name, sf::Sprite& sp) {
	Animation anim = m_animation_[animation_name];
	if (anim.frame_ammount != 0) {
		if (++update_time_ >= anim.switch_time) {
			update_time_ = 0;
			sp.setTextureRect(sf::IntRect(
				{ anim.sprite_size.x * curr_index_, 0 },
				{ anim.sprite_size.x, anim.sprite_size.y }
			));
			if (curr_index_ < anim.frame_ammount-1)
				++curr_index_;
			else curr_index_ = 0;
		}
	} else {
		std::cerr << "Can\'t find animation!\n";
	}
}

// Add animation
void AnimationManager::addAnimation(const std::string& animation_name, Animation& anim) {
	m_animation_[animation_name] = anim;
}

// Delete animation
void AnimationManager::delAnimation(const std::string& animation_name) {
	m_animation_.erase(animation_name);
}
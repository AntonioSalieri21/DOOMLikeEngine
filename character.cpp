#include "character.hpp"

Character::Character(float speed, std::string name) : Object(name), m_speed(speed) {
    m_speed = speed;
} 


Character::~Character() {
    // Destructor implementation
}

float Character::GetSpeed() const {
    return m_speed;
}
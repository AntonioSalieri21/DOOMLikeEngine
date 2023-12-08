#include "object.hpp"

/*Object::Object(std::string name, float x, float y, float pitch, float yaw, float roll, float scale)
{
    m_name = name;

    m_x = x;
    m_y = y;

    m_pitch = pitch;
    m_yaw = yaw;
    m_roll = roll;

    m_scale_x = scale;
    m_scale_y = scale;
}*/

Object::Object(std::string name, float x, float y, float pitch, float yaw, float roll, float scale_x, float scale_y)
{
    m_name = name;

    m_x = x;
    m_y = y;

    m_pitch = pitch;
    m_yaw = yaw;
    m_roll = roll;

    m_scale_x = scale_x;
    m_scale_y = scale_y;
}


Object::~Object() {
    // Destructor implementation
}
sf::Sprite Object::GetSprite() const {
    return m_sprite;
}

std::string Object::GetName() const {
    return m_name;
}

void Object::SetSprite(std::string filename) {
    if(!m_texture.loadFromFile(filename)) {
        std::cout << "Error loading texture: " << filename << std::endl;
    }
    m_sprite.setTexture(m_texture);
}

float Object::GetScaleX() const {
    return m_scale_x;
}
float Object::GetScaleY() const {
    return m_scale_y;
}

float Object::GetX() const {
    return m_x;
}
float Object::GetY() const {
    return m_y;
}

void Object::SetX(float x) {
    m_x = x;
}
void Object::SetY(float y) {
    m_y = y;
}
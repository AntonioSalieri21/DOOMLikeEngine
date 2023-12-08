#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "object.hpp"
class Character : public Object
{
public:
    Character(float speed = 10, std::string name) : Object(name), m_speed(speed) {};
    ~Character();

    float GetSpeed() const;

private:
    float m_speed;
};

#endif // CHARACTER_HPP

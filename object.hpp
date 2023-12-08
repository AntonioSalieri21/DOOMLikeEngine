#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <SFML/Graphics.hpp>
#include <iostream>

class Object {
public:
    Object(std::string name, float x = 0.0f, float y = 0.0f, float pitch = 0.0f, float yaw = 0.0f, float roll = 0.0f, float scale_x = 1.0f, float scale_y = 1.0f);
    //Object(std::string name, float x = 0.0f, float y = 0.0f, float pitch = 0.0f, float yaw = 0.0f, float roll = 0.0f, float scale = 1.0f);
    ~Object();

    void SetX(float x);
    void SetY(float y);
    void SetRotation(float rotation);
    void SetScale(float scale);
    void SetSprite(std::string filename);

    float GetX() const;
    float GetY() const;
    float GetRotation() const;
    float GetScaleX() const;
    float GetScaleY() const;
    sf::Sprite GetSprite() const;
    std::string GetName() const;


protected:
    Object() : m_name("Default"), m_x(0.0f), m_y(0.0f), m_pitch(0.0f), m_yaw(0.0f), m_roll(0.0f), m_scale_x(1.0f), m_scale_y(1.0f) {} 
    std::string m_name;
    float m_x;
    float m_y;
    float m_pitch; // Rotation around the x axis
    float m_yaw; // Rotation around the y axis
    float m_roll; // Rotation around the z axis
    float m_scale_x;
    float m_scale_y;
    sf::Sprite m_sprite;
    sf::Texture m_texture;

};

#endif // OBJECT_HPP

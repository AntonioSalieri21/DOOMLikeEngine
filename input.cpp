#include "input.hpp"

void CharacteInput::characterInput(Character* character)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        character->SetX(character->GetX() - character->GetSpeed());
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        character->SetX(character->GetX() + character->GetSpeed());
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        character->SetY(character->GetY() - character->GetSpeed());
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        character->SetY(character->GetY() + character->GetSpeed());
    }
}
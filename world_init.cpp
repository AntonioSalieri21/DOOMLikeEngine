#include "world_init.hpp"
#include "character.hpp"
void WorldInit::initWorld(World* world)
{
    Character* doomGuy = new Character("doomGuy", 200, 200, 0, 0, 0, 0.1, 0.1);
    doomGuy->SetSprite("./Sources/Sprites/doomguy.png");

    Object* demon = new Object("demon", 400, 400, 0, 0, 0, 0.1, 0.1);
    demon->SetSprite("./Sources/Sprites/demon.jpg");
    world->AddObject(doomGuy);
    world->AddObject(demon);
}
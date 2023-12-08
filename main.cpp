#include <SFML/Graphics.hpp>
#include "world.hpp"
#include "object.hpp"
#include "world_init.hpp"
#include "input.hpp"
//main is for initialising the window and the game loop
int main()
{
    World mainScene("DOOOOOOOOOOOOOOM BABY");

    WorldInit::initWorld(&mainScene);
    sf::RenderWindow window(sf::VideoMode(800, 600), mainScene.GetName());

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        //input handling
        CharacteInput::characterInput((Character*)mainScene.GetObject("doomGuy"));

        // Draw the world here
        std::vector<Object*> objects = mainScene.GetObjects();
        for(Object* obj : objects)
        {
            sf::Sprite sprite = obj->GetSprite();
            
            sprite.setPosition(obj->GetX(), obj->GetY());
            //sprite.setRotation(obj->GetRotation());
            sprite.setScale(obj->GetScaleX(), obj->GetScaleY());
            window.draw(sprite);

        }

        window.display();
    }

    return 0;
}
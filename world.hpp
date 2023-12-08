#ifndef WORLD_HPP
#define WORLD_HPP


#include <string>
#include <vector>
#include "object.hpp"

class World
{
private:
    std::string name;
    std::vector<Object*> objects;

public:
    World(std::string name);
    ~World();
    std::string GetName() const;
    std::vector<Object*> GetObjects() const;
    void AddObject(Object* object);
    bool RemoveObject(std::string name);
    Object* GetObject(std::string name);

};

#endif // WORLD_HPP

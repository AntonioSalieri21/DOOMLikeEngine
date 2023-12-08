#include "world.hpp"

World::World(std::string name) {
    this->name = name;
}

World::~World() {
    // Destructor implementation
}

std::string World::GetName() const {
    return name;
}

std::vector<Object*> World::GetObjects() const {
    return objects;
}

void World::AddObject(Object* object) {
    objects.push_back(object);
}

bool World::RemoveObject(std::string name) {
    for(int i = 0; i < objects.size(); i++) {
        if(objects.at(i)->GetName() == name) {
            objects[i]->~Object();
            objects.erase(objects.begin() + i);
            return true;
        }
    }
    return false;
}

Object* World::GetObject(std::string name) {
    for(Object* obj : objects) {
        if(obj->GetName() == name) {
            return obj;
        }
    }
    return nullptr;
}
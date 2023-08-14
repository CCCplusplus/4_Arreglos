#include "Entity.h"
#include <random>

Entity::Entity()
{
    health = 100;
    std::string e = "Entity";
    std::random_device randomizer;
    std::mt19937 gen(randomizer());
    std::uniform_int_distribution<int> dist(10000, 99999);
    name = e.append(std::to_string(dist(gen)));
}

const char* Entity::ToString()
{
    return name.c_str();
}

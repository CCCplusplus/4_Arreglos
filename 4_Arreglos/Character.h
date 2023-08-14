#pragma once
#include "Entity.h"
#include "GenericArray.h"
#include "Weapon.h"

typedef GenericArray<Weapon> Inventory;
class Character : public Entity
{


public:
    int karma;
    Character();
    Inventory myweapons;
};



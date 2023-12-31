#pragma once
#include "Entity.h"
class Weapon : public Entity
{

	int Damage;
	int Ammo;

public:

	enum EType { melee, ranged } type;

	Weapon() 
	{
		name = "weapon";
		Ammo = 0;
		Damage = 0;
		type = EType::ranged;
	}

	Weapon(const char* _name, int _ammo, EType _type, int _damage);

	void attack(Entity entiti);

	void giveAmmo(int newAmmo);
};


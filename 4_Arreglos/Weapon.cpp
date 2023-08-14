#include "Weapon.h"

Weapon::Weapon(const char* _name, int _ammo, EType _type, int _damage)
{
	name = _name;
	Ammo = _ammo;
	Damage = _damage;
	type = _type;
}

void Weapon::attack(Entity entiti)
{
	
}

void Weapon::giveAmmo(int newAmmo)
{
}

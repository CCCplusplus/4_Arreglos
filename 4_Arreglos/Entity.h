#pragma once
#include <string>
class Entity
{
public:
	Entity();

	std::string name;

	int health;


	const char* ToString();
};


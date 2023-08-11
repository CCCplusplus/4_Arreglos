#pragma once
#include <string.h>
class ArrayChar
{
	size_t size;

public:

	char* arri;

	ArrayChar(size_t newsize);

	~ArrayChar();

	char Get(size_t index);

	void Set(size_t index, char newvalue);

	size_t Size();

	void Clear();
};


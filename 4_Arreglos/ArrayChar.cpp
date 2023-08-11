#include "ArrayChar.h"

ArrayChar::ArrayChar(size_t newsize)
{
	size = newsize;
	arri = new char(size);
}

ArrayChar::~ArrayChar()
{
	if (arri != nullptr) {
		delete[] arri;
		size = 0;
	}
}

char ArrayChar::Get(size_t index)
{
	if (index < size)
		return arri[index];
	else return 0;
}

void ArrayChar::Set(size_t index, char newvalue)
{
	if (index < size)
	{
		arri[index] = newvalue;
	}
}

size_t ArrayChar::Size()
{
	return size;
}

void ArrayChar::Clear()
{
	memset(arri, size * sizeof(char), 0);
}

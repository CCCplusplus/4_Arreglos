#include "Array.h"


Array::Array(size_t newsize)
{
	size = newsize;
	array = new unit32(size);
}

Array::~Array()
{
	if (array != nullptr) {
		delete[] array;
		size = 0;
	}

}

unit32 Array::Get(size_t index)
{
	if (index < size)
		return array[index];
	else return 0;
}

void Array::Set(size_t index, unit32 newvalue)
{
	if (index < size) 
	{
		array[index] = newvalue;
	}
}

size_t Array::Size()
{
	return size;
}

void Array::Clear()
{
	memset(array, size * sizeof(unit32), 0);
}

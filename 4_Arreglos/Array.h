#pragma once
#include <string.h>

//Clase de arreglo Dinamico de 4 bytes
typedef unsigned __int32 unit32;
class Array
{
	//sizeof(UInt32) se utiliza para guardar elementos de 4 bytes se usa para guardar direccion ip.
	size_t size;

public:
	unit32* array;

	//ctor

	Array(size_t newsize);

	~Array();

	unit32 operator[](size_t index);

	unit32 Get(size_t index);

	void Set(size_t index, unit32 newvalue);

	void Set(size_t index, const char* bytes);

	size_t Size();

	void Clear();

};


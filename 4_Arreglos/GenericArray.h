#pragma once
#include <iostream>
#include "Entity.h"

template <typename T>
class GenericArray
{
	size_t size;
	T* array;

public:

	GenericArray(size_t newsize) 
	{
		size = newsize;
		array = new T[newsize];
	}

	~GenericArray() 
	{
		if (array != nullptr) 
		{
			delete[] array;
			size = 0;
		}
	}

	T& operator[] (size_t index) 
	{
		return array[index];
	}

	void resize(size_t newsize) 
	{
		T* newdata = new T[newsize];
		if (newsize < size) 
		{
			for (int i = 0; i < newsize; i++) 
			{
				newdata[i] = array[i];
			}
			delete[] array;
			array = newdata;
			size = newsize;
		}
		else 
		{
			for (int i = 0; i < size; i++)
			{
				newdata[i] = array[i];
			}
			delete[] array;
			array = newdata;
			size = newsize;
		}
	}

	size_t getSize() 
	{
		return size;
	}

	size_t SizeBytes() 
	{
		return sizeof(T);
	}

	void PrintValues() 
	{
		for (int i = 0; i < size; i++) 
		{
			//std::cout << "[" << i << "] = " << array[i] << "\n";
		}
	}

};

template<>
inline void GenericArray<Entity>::PrintValues()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "[" << i << "] = " << array[i].ToString() << std::endl;
	}
}
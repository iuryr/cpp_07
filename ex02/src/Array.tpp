#include "Array.hpp"
#include "qolMacros.hpp"

#include <cstdlib>
#include <stdexcept>

template<typename T>
Array<T>::Array(void): _data(NULL), _size(0)
{
}

template<typename T>
Array<T>::~Array(void)
{
	if (_size != 0)
	{
		delete[] _data;
	}
}

template<typename T>
Array<T>::Array(const Array& obj): _data(NULL), _size(0)
{
	*this = obj;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{
	if (this != &obj)
	{
		if (_data != NULL)
		{
			delete [] _data;
		}
		_size = obj._size;
		if (obj._size != 0)
		{
			_data = new T[_size];
		}

		for (unsigned int i = 0; i < _size; i++)
		{
			_data[i] = obj._data[i];
		}
	}
	
	return *this;
}

template<typename T>
Array<T>::Array(unsigned int n): _data(NULL), _size(n)
{
	if (n != 0)
	{
		_data = new T[n]();
	}
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return _size;
}

template<typename T>
T& Array<T>::operator[](std::size_t idx)
{
	if (idx < 0 || idx >= _size)
	{
		// throw std::out_of_range("Index out of bounds");
		throw std::exception();
	}
	return _data[idx];
}

template<typename T>
const T& Array<T>::operator[](std::size_t idx) const
{
	if (idx < 0 || idx >= _size)
	{
		throw std::exception();
	}
	return _data[idx];
}

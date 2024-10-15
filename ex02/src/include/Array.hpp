#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

#include <cstddef> //size_t

template<typename T=int>
class Array
{
public:
	Array(void);
	~Array(void);
	Array(const Array& obj);
	Array& operator=(const Array& obj);

	Array(unsigned int n);
	T& operator[](std::size_t idx);
	const T& operator[](std::size_t idx) const;
	unsigned int size(void) const;

private:
	T* _data;
	unsigned int _size;
};

#include "../Array.tpp"

#endif //_ARRAY_HPP_

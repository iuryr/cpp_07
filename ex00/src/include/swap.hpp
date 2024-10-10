#ifndef _SWAP_HPP_
#define _SWAP_HPP_

template<typename T>
void swap(T& lhs, T& rhs)
{
	T temp;
	temp = rhs;
	rhs = lhs;
	lhs = temp;
};

#endif //_SWAP_HPP_

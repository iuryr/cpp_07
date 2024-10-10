#ifndef _MAX_HPP_
#define _MAX_HPP_

template<typename T>
T max(T lhs, T rhs)
{
	if (lhs > rhs)
	{
		return lhs;
	}
	else 
	{
		return rhs;
	}
};

#endif //_MAX_HPP_

#ifndef _MIN_HPP_
#define _MIN_HPP_

template<typename T>
T min(T lhs, T rhs)
{
	if (lhs < rhs)
	{
		return lhs;
	}
	else 
	{
		return rhs;
	}
};

#endif //_MIN_HPP_

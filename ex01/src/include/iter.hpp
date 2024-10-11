#ifndef _ITER_HPP_
#define _ITER_HPP_

template<typename T, typename F>
void iter(T* array, unsigned int length, F function)
{
	for (unsigned int i = 1; i < length + 1; i++)
	{
		function(array[i-1]);
	}
}

#endif //_ITER_HPP

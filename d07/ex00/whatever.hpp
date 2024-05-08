#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

#include <iostream>

template<typename T>
void swap(T & rhs, T & lhs)
{
	T tmp = rhs;
	rhs = lhs;
	lhs = tmp;
}

template<typename T>
T min(T rhs, T lhs)
{
	if (lhs <= rhs)
		return lhs;
	return rhs;
}

template<typename T>
T max(T rhs, T lhs)
{
	if (lhs >= rhs)
		return lhs;
	return rhs;
}

#endif
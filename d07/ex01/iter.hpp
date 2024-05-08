#ifndef __ITER_HPP__
# define __ITER_HPP__

#include <iostream>

template< typename T >
void	print_val(T print) {
	std::cout << print << std::endl;
}

template< typename T >
void	iter( T* array, size_t length, void (*f)(T) )
{
	for (size_t i = 0; i < length; i++)
			f(array[i]);
}

#endif
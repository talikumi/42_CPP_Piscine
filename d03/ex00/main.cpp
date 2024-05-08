#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap cl( "Clappy" );
	cl.attack( "Stranger" );
	cl.takeDmg( 8 );
	std::cout << cl;
	cl.getRepaired( 3 );
	std::cout << cl;
	cl.takeDmg( 8 );
	std::cout << cl;
	return 0;
}

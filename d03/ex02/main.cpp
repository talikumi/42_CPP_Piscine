#include "FragTrap.hpp"
#include <iostream>

int main()
{
	FragTrap sc( "Fraggy" );
	sc.attack( "Stranger" );
	sc.takeDmg( 8 );
	std::cout << sc;
	sc.getRepaired( 3 );
	std::cout << sc;
	sc.takeDmg( 8 );
	sc.highFive();
	std::cout << sc;
	return 0;
}

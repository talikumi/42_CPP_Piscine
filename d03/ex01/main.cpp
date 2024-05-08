#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap sc( "Scavvy" );
	sc.attack( "Stranger" );
	sc.takeDmg( 8 );
	std::cout << sc;
	sc.getRepaired( 3 );
	std::cout << sc;
	sc.takeDmg( 8 );
	sc.guardGate();
	std::cout << sc;
	return 0;
}

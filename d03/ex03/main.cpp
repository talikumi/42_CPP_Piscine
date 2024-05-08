#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
	DiamondTrap sc( "Diamonddd" );
	std::cout << sc;
	sc.attack( "Stranger" );
	sc.takeDmg( 8 );
	std::cout << sc;
	sc.getRepaired( 3 );
	std::cout << sc;
	sc.takeDmg( 8 );
	sc.whoAmI();
	return 0;
}

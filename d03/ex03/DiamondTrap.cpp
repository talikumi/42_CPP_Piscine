#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name", 100, 50, 30 ), ScavTrap( name ), FragTrap( name ), Name(name)
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap( src ), ScavTrap( src ), FragTrap( src ), Name(src.Name)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Deconstructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "DiamondTrap Assignment operator called" << std::endl;
	this->Name = rhs.Name;
	ClapTrap::operator=(rhs);
	return (*this);
}

void DiamondTrap::attack( std::string const & target )
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->Name << std::endl;
	std::cout << "ClapTrap name: " << this->getName() << std::endl;
}

std::ostream & operator<<( std::ostream & o, DiamondTrap const & cl )
{
	o << "DiamondTrap " << cl.getName() << " has " << cl.getHitpoints();
	o << " Hit points, " << cl.getEnergy_points() << " Energy points and ";
	o << cl.getAttack_damage() << " Attack damage" << std::endl;
	return o;
}


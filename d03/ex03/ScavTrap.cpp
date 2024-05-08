#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name, 100, 50, 20 )
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap( src )
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "ScavTrap Assignment operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return (*this);
}

void ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap " << this->getName() << " attacks ";
	std::cout << target << ", causing " << this->getAttack_damage();
	std::cout << " points of damage!" << std::endl; 
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}

std::ostream & operator<<( std::ostream & o, ScavTrap const & cl )
{
	o << "ScavTrap " << cl.getName() << " has " << cl.getHitpoints();
	o << " Hit points, " << cl.getEnergy_points() << " Energy points and";
	o << cl.getAttack_damage() << " Attack damage" << std::endl;
	return o;
}


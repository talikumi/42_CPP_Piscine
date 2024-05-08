#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap( name, 100, 100, 30 )
{
	std::cout << "FragTrap Defaut constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap( src )
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Deconstructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "FragTrap Assignment operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return (*this);
}

void FragTrap::attack( std::string const & target )
{
	std::cout << "FragTrap " << this->getName() << " attacks ";
	std::cout << target << ", causing " << this->getAttack_damage();
	std::cout << " points of damage!" << std::endl; 
}

void FragTrap::highFive()
{
	std::cout << "FragTrap " << this->getName() << " gives you a high five!" << std::endl;
}

std::ostream & operator<<( std::ostream & o, FragTrap const & cl )
{
	o << "FragTrap " << cl.getName() << " has " << cl.getHitpoints();
	o << " Hit points, " << cl.getEnergy_points() << " Energy points and ";
	o << cl.getAttack_damage() << " Attack damage" << std::endl;
	return o;
}


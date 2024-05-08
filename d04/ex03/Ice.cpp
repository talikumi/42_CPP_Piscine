#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Default Constructor" << std::endl;
	this->type = "ice";
}

Ice::Ice(const Ice & src) : AMateria("ice")
{
	std::cout << "Ice Copy Constructor" << std::endl;
	this->type = src.getType();
}
	
Ice::~Ice()
{
	std::cout << "Ice Destructor" << std::endl;
}

AMateria* Ice::clone() const
{
	std::cout << "Ice clone called" << std::endl;
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName() << " *" << std::endl;
}

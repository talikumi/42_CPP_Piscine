#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default Constructor" << std::endl;
	this->type = "cure";
}

Cure::Cure(const Cure & src) : AMateria("cure")
{
	std::cout << "Cure Copy Constructor" << std::endl;
	this->type = src.getType();
}
	
Cure::~Cure()
{
	std::cout << "Cure Destructor" << std::endl;
}

AMateria* Cure::clone() const
{
	std::cout << "Cure clone called" << std::endl;
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName();
	std::cout << "'s wounds *" << std::endl;
}

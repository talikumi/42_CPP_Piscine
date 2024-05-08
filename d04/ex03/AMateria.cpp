#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria Default Constructor Called" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria & src)
{
	std::cout << "AMateria Copy Constructor Called" << std::endl;
	this->type = src.getType();
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	this->type = rhs.getType();
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor Called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "impossible: " << target.getName() << std::endl;
}

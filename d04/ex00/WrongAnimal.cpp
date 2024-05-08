#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Constructor called" << std::endl;
	this->Type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	WrongAnimal::operator=(src);
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & rhs)
{
	if (this == &rhs)
		return *this;
	this->Type = rhs.getType();
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Undefined Wrong Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->Type;
}

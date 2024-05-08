#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor called" << std::endl;
	this->type = "none";
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal Copy Constructor operator" << std::endl;
	Animal::operator=(src);
}

Animal & Animal::operator=(Animal const & rhs)
{
	if (this == &rhs)
		return *this;
	this->type = rhs.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "Undefined Sound" << std::endl;	
}

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog & src)
{
	std::cout << "Dog Constructor operator" << std::endl;
	Animal::operator=(src);
	Dog::operator=(src);
}

Dog & Dog::operator=(const Dog & rhs)
{
	if (this == &rhs)
		return *this;
	this->type = rhs.getType();
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

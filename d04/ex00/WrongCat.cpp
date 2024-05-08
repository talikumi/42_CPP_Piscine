#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Constructor called" << std::endl;
	this->Type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & src)
{
	WrongCat::operator=(src);
}

WrongCat & WrongCat::operator=(const WrongCat & rhs)
{
	if (this == &rhs)
		return *this;
	this->Type = rhs.getType();
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Deconstructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Beeeeh" << std::endl;
}

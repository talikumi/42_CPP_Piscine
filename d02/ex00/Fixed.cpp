#include "Fixed.hpp"

Fixed::Fixed() : fixed_num(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& source)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = source;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this == &src)
        return(*this);
    this->fixed_num = src.getRawBits();
    return (*this);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_num = raw;
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_num;
}

#include "Fixed.hpp"

Fixed::Fixed() : fixed_num(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int new_int)
{
    fixed_num = new_int << bits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float new_float)
{
    fixed_num = (roundf(new_float * (1 << this->bits)));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& source)
{
    fixed_num = source.fixed_num;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& source)
{
    fixed_num = source.fixed_num;
    std::cout << "Copy assignment operator called" << std::endl;

    return *this;
}

void Fixed::setRawBits(int const raw_bits)
{
    std::cout << "setRawBits member function called" << std::endl;
    fixed_num = raw_bits;
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixed_num;
}

float Fixed::toFloat() const
{
    return ((float)fixed_num / (1 << this->bits));
}

int Fixed::toInt() const
{
    return (fixed_num >> bits);
}

std::ostream& operator<<(std::ostream &o, const Fixed &i)
{
    o << i.toFloat();
    return o;
}
#include "Fixed.hpp"

Fixed::Fixed() : fixed_num(0)
{
}

Fixed::Fixed(const int new_val)
{
    fixed_num = new_val << bits;
}

Fixed::Fixed(const float other_float)
{
    fixed_num = (roundf(other_float * (1 << this->bits)));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& src)
{
    fixed_num = src.fixed_num;
}

Fixed& Fixed::operator=(const Fixed& src)
{
    fixed_num = src.fixed_num;

    return *this;
}

void Fixed::setRawBits(int const bits)
{
    fixed_num = bits;
}

int Fixed::getRawBits(void) const 
{
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

bool	Fixed::operator==(const Fixed& val) const
{
	return (fixed_num == val.getRawBits());
}

bool	Fixed::operator!=(const Fixed& val) const
{
	return (fixed_num != val.getRawBits());
}

bool	Fixed::operator>(const Fixed& val) const
{
	return (fixed_num > val.getRawBits());
}

bool	Fixed::operator<(const Fixed& val) const
{
	return (fixed_num < val.getRawBits());
}

bool	Fixed::operator>=(const Fixed& val) const
{
	return (fixed_num >= val.getRawBits());
}

bool	Fixed::operator<=(const Fixed& val) const
{
	return (fixed_num <= val.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& val)
{
	Fixed add;

	add.setRawBits(fixed_num + val.getRawBits());
	return (add);
}

Fixed	Fixed::operator-(const Fixed& val)
{
	Fixed sub;

	sub.setRawBits(fixed_num - val.getRawBits());
	return (sub);
}

Fixed	Fixed::operator*(const Fixed& val)
{
	return (Fixed(toFloat() * val.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& val)
{
	return (Fixed(toFloat() / val.toFloat()));
}

Fixed&	Fixed::operator++(void)
{
	fixed_num++;
	return *this;
}

Fixed&	Fixed::operator--(void)
{
	fixed_num--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);

	fixed_num++;
	return tmp;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);

	fixed_num--;
	return tmp;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed& min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed& max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return a;
	return b;
}
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    public:
     
     Fixed();
     Fixed(const int new_int);
     Fixed(const float new_float);
     ~Fixed();
     Fixed(const Fixed& source);
     Fixed& operator=(const Fixed& rhs);
     void setRawBits(int const raw);
     int getRawBits(void) const;
     float toFloat() const;
     int toInt() const;

     // Relational operators

     bool	operator==(const Fixed& other_value) const;
	 bool	operator!=(const Fixed& other_value) const;
	 bool	operator>(const Fixed& other_value) const;
	 bool	operator<(const Fixed& other_value) const;
	 bool	operator>=(const Fixed& other_value) const;
	 bool	operator<=(const Fixed& other_value) const;
     
     // Arithmetic operators

	 Fixed	operator+(const Fixed& other_value);
	 Fixed	operator-(const Fixed& other_value);
	 Fixed	operator*(const Fixed& other_value);
	 Fixed	operator/(const Fixed& other_value);

     // Increment & Decrement operators

	 Fixed&	operator++(void);
	 Fixed&	operator--(void);
	 Fixed	operator++(int);
	 Fixed	operator--(int);

	 const static Fixed& min(const Fixed& a, const Fixed& b);
	 const static Fixed& max(const Fixed& a, const Fixed& b);
    
    private:
     
     int fixed_num;
     static const int bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);
const Fixed& min(const Fixed& a, const Fixed& b);
const Fixed& max(const Fixed& a, const Fixed& b);

#endif
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
     
     int fixed_num;
     static const int bits = 8;

    public:
     
     Fixed();
     Fixed(const int new_int);
     Fixed(const float new_float);
     Fixed(const Fixed& source);
     Fixed& operator=(const Fixed& rhs);
     ~Fixed();
     void setRawBits(int const raw);
     int getRawBits(void) const;
     float toFloat() const;
     int toInt() const;

};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif

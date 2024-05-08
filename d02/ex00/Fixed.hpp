#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
     
     int fixed_num;
     static const int bits = 8;
    
    public:
     
     Fixed();
     Fixed(const Fixed& source);
     ~Fixed();
     Fixed& operator=(Fixed const & rhs);
     void setRawBits(int const raw);
     int getRawBits(void) const;
};

#endif

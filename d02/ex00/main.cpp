#include "Fixed.hpp"

int main()
{
    std::cout << std::endl;
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;
    
    std::cout << "A value: " << a.getRawBits() << std::endl;
    std::cout << "B value: " << b.getRawBits() << std::endl;
    std::cout << "C value: " << c.getRawBits() << std::endl;
    
    return 0;
}


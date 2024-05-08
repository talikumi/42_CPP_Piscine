#include <iostream>

int main()
{
    std::string mess = "HI THIS IS BRAIN";
    std::string *strPtr = &mess;
    std::string &strRef = mess;

    std::cout << &mess << std::endl;
    std::cout << strPtr << std::endl;
    std::cout << &strRef << std::endl;

    std::cout << std::endl;

    std::cout << mess << std::endl;
    std::cout << *strPtr << std::endl;
    std::cout << strRef << std::endl;
}
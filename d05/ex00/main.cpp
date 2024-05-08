#include "Bureaucrat.hpp" 

int main()
{
    Bureaucrat b1("Andrew", 120);

    std::cout << std::endl;
    std::cout << "A new bureaucrat has joined: " << std::endl;
	std::cout << b1 << std::endl;
	std::cout << b1.getName() << " has been demoted! New grade: " << std::endl;
    
    try
	{
		b1.decrementGrade();
		std::cout << b1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << b1.getName() << " has been promoted! New grade: " << std::endl;
	
    try
	{
		b1.incrementGrade();
		std::cout <<  b1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    
    return 0;
}
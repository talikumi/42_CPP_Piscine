#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << std::endl;
	Form		form_prova("Modulo 1", 24, 1);
	Bureaucrat	j("Julius", 15);
	Bureaucrat	a("Andrew", 55);
	
	try
	{
		std::cout << form_prova << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}

	std::cout << "First attempt by ";
	std::cout << a;
	a.signForm(form_prova);
	std::cout << std::endl;
	std::cout << "Second attempt by ";
	std::cout << j;
	j.signForm(form_prova);
	std::cout << std::endl;
	return (0);
}

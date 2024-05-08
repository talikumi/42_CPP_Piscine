#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
  Intern i1;
  Bureaucrat b1("Julius", 3);
  Form* rrf;

  std::cout << std::endl;
  std::cout << "-------------  Bureaucrat  -------------" << std::endl;
  std::cout << "\n" << b1 << std::endl;
  std::cout << "----------------  Form  ----------------" << std::endl;
  std::cout << std::endl;
  rrf = i1.makeForm("robotomy request", "Bender");
  std::cout << "\n" << *rrf << std::endl;
  std::cout << "--------------  Attempts  --------------" << std::endl;
  std::cout << std::endl;
  b1.signForm(*rrf);
  b1.executeForm(*rrf);
  std::cout << std::endl;

  return 0;
}

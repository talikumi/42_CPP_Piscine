#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
  Bureaucrat b1("Julius", 148);
  Bureaucrat b2("Andrew", 2);
  ShrubberyCreationForm tree("Tree");
  RobotomyRequestForm rob("Robotomy");
  PresidentialPardonForm pres("Presidential");

  std::cout << std::endl;
  std::cout << "-------------  Bureaucrats  -------------" << std::endl;
  std::cout << "\n" << b1;
  std::cout << b2 << std::endl;
  std::cout << "----------------  Forms  ----------------" << std::endl;
  std::cout << "\n" << tree << std::endl;
  std::cout << "\n" << rob << std::endl;
  std::cout << "\n" << pres << std::endl;
  std::cout << "--------------  Attempts  --------------" << std::endl;
  std::cout << "\n" << std::endl;
  b1.signForm(tree);
  b1.executeForm(tree);
  std::cout << std::endl;
  b1.signForm(rob);
  b1.executeForm(rob);
  std::cout << std::endl;
  b1.signForm(pres);
  b1.executeForm(pres);
  std::cout << std::endl;
  std::cout << std::endl;
  b2.signForm(tree);
  b2.executeForm(tree);
  std::cout << std::endl;
  b2.signForm(rob);
  b2.executeForm(rob);
  std::cout << std::endl;
  b2.signForm(pres);
  b2.executeForm(pres);
  std::cout << std::endl;

  return 0;
}

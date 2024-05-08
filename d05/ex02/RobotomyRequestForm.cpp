#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45)
{
  this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExe())
{
  this->target = src.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm & rhs )
{
	if (this != &rhs)
		this->target = rhs.getTarget();
	return *this;
}

const std::string RobotomyRequestForm::getTarget() const
{
  return this->target;
}

void RobotomyRequestForm::execute ( const Bureaucrat & executer) const
{
	if (executer.getGrade() > this->getGradeToExe())
		throw Form::GradeTooLowException();
	std::cout << "* Drilling noises *" << std::endl;
	srand(time(NULL));
	if(rand() % 2)
    	std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
    	std::cout << " couldn't be robotomized" << this->target << std::endl;
}
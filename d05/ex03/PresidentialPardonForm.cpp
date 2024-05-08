#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form( "PresidentialPardonForm", 25, 5 )
{
  this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form( "PresidentialPardonForm", 25, 5 )
{
  this->target = src.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm & rhs )
{
	if (this != &rhs)
		this->target = rhs.getTarget();
	return *this;
}

const std::string PresidentialPardonForm::getTarget() const
{
  return this->target;
}

void PresidentialPardonForm::execute ( const Bureaucrat & executor) const
{
  if (executor.getGrade() > this->getGradeToExe())
	throw Form::GradeTooLowException();
  std::cout << this->getTarget() << " has been perdoned by Zafod Beeblebrox" << std::endl;
}
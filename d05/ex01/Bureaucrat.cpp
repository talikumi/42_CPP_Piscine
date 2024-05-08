#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : name(src.name)
{
	if (src.grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (src.grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade = src.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	grade = src.grade;
	return *this;
}

const std::string	Bureaucrat::getName(void) const
{
	return name;
}

int					Bureaucrat::getGrade(void) const
{
	return grade;
}

void				Bureaucrat::incrementGrade(void)
{
	grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void				Bureaucrat::decrementGrade(void)
{
	grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& i, const Bureaucrat& o)
{
	i << o.getName() << ", bureaucrat grade " << o.getGrade() << std::endl;
	return i;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

void				Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " couldn't sign " << form.getName() << " because his";
		std::cerr << e.what() << std::endl;
	}

}

#include "Form.hpp"

Form::Form(void) : name(""), grade_to_sign(0), grade_to_exe(0) {}

Form::Form(std::string _name, int _signGrade, int _execGrade) :
	name(_name), grade_to_sign(_signGrade), grade_to_exe(_execGrade), is_signed(false)
{
	if (grade_to_sign < 1 || grade_to_exe < 1)
		throw Form::GradeTooHighException();
	else if (grade_to_sign > 150 || grade_to_exe > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& src) : name(src.getName()), grade_to_sign(src.getGradeToSign()), grade_to_exe(src.getGradeToExe()), is_signed(src.isSigned())
{
	this->operator=(src);
}

Form::~Form(void) {}

Form& Form::operator=(const Form& src)
{
	is_signed = src.is_signed;
	return *this;
}

std::string		Form::getName(void) const
{
	return name;
}

bool			Form::isSigned(void) const
{
	return is_signed;
}

int				Form::getGradeToSign(void) const
{
	return grade_to_sign;
}

int				Form::getGradeToExe(void) const
{
	return grade_to_exe;
}

void			Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > grade_to_sign)
		throw Form::GradeTooLowException();
	else
		is_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low!");
}

std::ostream &operator<<(std::ostream& stream, const Form& form)
{
	std::cout << "Form: " << form.getName() << std::endl;
	std::cout << "Grade needed to sign: " << form.getGradeToSign() << std::endl;
	std::cout << "Grade needed to execute: " << form.getGradeToExe() << std::endl;
	std::cout << "Signed: ";

	if (form.isSigned())
		std::cout << "Yes." << std::endl;
	else
		std::cout << "No." << std::endl;
	return stream;
}

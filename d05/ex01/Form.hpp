#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private:

	 const std::string	name;
	 const int	grade_to_sign;
	 const int	grade_to_exe;
	 bool	is_signed;

	public:
	
	 Form(void);
	 Form(std::string name, int signGrade, int execGrade);
	 Form(const Form& src);
	 ~Form(void);

	 Form& operator=(const Form& src);

	 std::string getName(void) const;
	 bool isSigned(void) const;
	 int getGradeToSign(void) const;
	 int getGradeToExe(void) const;
	 void beSigned(Bureaucrat& bureaucrat);

	 class	GradeTooHighException : public std::exception
	 {
		public:
			virtual	const char* what() const throw();
	 };

	 class	GradeTooLowException : public std::exception
	 {
		public:
			virtual	const char* what() const throw();
	};

};

std::ostream &operator<<(std::ostream& i, const Form& o);

#endif

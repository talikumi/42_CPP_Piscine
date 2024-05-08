#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:
	
	 const std::string name;
	 int grade;
	 
    public:

	 Bureaucrat(void);
	 Bureaucrat(const std::string name, int grade);
	 Bureaucrat(const Bureaucrat& src);
	 Bureaucrat& operator=(const Bureaucrat& src);
	 ~Bureaucrat(void);
	 const std::string	getName(void) const;
	 int    getGrade(void) const;
	 void	incrementGrade(void);
	 void	decrementGrade(void);
     class  GradeTooHighException : public std::exception
	 {
		public:
			virtual const char* what() const throw();
	 };

	 class GradeTooLowException : public std::exception
	 {
		public:
			virtual const char* what() const throw();
	 };
};

std::ostream& operator<<(std::ostream& i, const Bureaucrat& o);

#endif
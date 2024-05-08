#ifndef __INTERN_HPP__
# define __INTERN_HPP__
# include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Form * makeForm(std::string name, std::string target);
    private:
        Form * makePresidential(std::string target) const;
        Form * makeRobotomy(std::string target) const;
        Form * makeShruberry(std::string target) const;
        Form * makeError(std::string target) const;
        class UnknowForm : public std::exception
        {
            public:
                const char * what() const throw();
        };
};

#endif
#ifndef SHREBBERYCREATIONFORM_HPP
#define SHREBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm & src );
		ShrubberyCreationForm & operator=( const ShrubberyCreationForm & rhs );
		~ShrubberyCreationForm();

		const std::string getTarget() const;
		virtual void execute(const Bureaucrat & executer) const;
};

#endif

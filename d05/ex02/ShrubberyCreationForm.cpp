#include "ShrubberyCreationForm.hpp"

#include "ShrubberyCreationForm.hpp"
# include <iostream>
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShrubberyCreationForm", 145, 137)
{
  this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExe())
{
  this->target = src.getTarget();
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm & rhs )
{
  if (this != &rhs)
	this->target = rhs.getTarget();
  return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

const std::string ShrubberyCreationForm::getTarget() const
{
  return this->target;
}

void ShrubberyCreationForm::execute ( const Bureaucrat & executer) const
{
	if (executer.getGrade() > this->getGradeToExe())
	throw Form::GradeTooLowException();
	std::string filename;
	filename = this->getTarget();
	std::ofstream fd(filename.c_str());
	if (fd.is_open())
  	{
		fd << "       ###" << std::endl;
		fd << "      #o###" << std::endl;
		fd << "     #####o###" << std::endl;  
		fd << "    #o###|#/###" << std::endl;
		fd << "     ####|/#o#" << std::endl;
		fd << "      # }|{ #" << std::endl;
		fd << "	 }|{" << std::endl;
	
		fd.close();
  	}
}

 
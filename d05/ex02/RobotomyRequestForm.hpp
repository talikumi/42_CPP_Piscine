#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <cstdlib>
#include <time.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm & src );
		~RobotomyRequestForm();
		RobotomyRequestForm & operator=( const RobotomyRequestForm & rhs );

		const std::string getTarget() const;
		virtual void execute(const Bureaucrat & executer) const;
};

#endif

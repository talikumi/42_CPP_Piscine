#include "Harl.hpp"

Harl::Harl () 
{
	std::cout << "Constructor Call" << std::endl;
}

Harl::~Harl ()
{
	std::cout << "Deconstructor Call" << std::endl;
}

void Harl::debug ( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info ( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t";
	std::cout << " put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning ( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been";
	std::cout << " coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error ( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Harl::complain (std::string level)
{
	int i = -1; 
	std::string str_option[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; 
	void (Harl::*ft[4])( void ) = 
	{
		&Harl::debug,\
		&Harl::info,\
		&Harl::warning,\
		&Harl::error
	};
	while (++i < 4)
	{
		if (str_option[i] == level)
			(this->*ft[i])();
	}
}

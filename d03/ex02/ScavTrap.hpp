#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src );
		~ScavTrap();
		ScavTrap & operator=(ScavTrap const & rhs);
		void attack( std::string const & target );
		void guardGate();
};

std::ostream & operator<<( std::ostream & o, ScavTrap const & cl );

#endif

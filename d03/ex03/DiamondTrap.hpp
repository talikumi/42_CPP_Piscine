#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__
# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();
		DiamondTrap & operator=(DiamondTrap const & rhs);
		void attack( std::string const & target );
		void whoAmI();
	private:
		std::string Name;
};

std::ostream & operator<<( std::ostream & o, DiamondTrap const & cl );

#endif

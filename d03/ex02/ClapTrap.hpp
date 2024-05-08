#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__
# include <iostream>

class ClapTrap {
	public:
		ClapTrap( std::string name );
		ClapTrap( std::string name, unsigned int hp, unsigned int ep, unsigned int ad);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();
		ClapTrap & operator=(ClapTrap const & rhs);
		void attack( std::string const & target );
		void takeDmg( unsigned int amount );
		void getRepaired( unsigned int amount );
		std::string getName( void ) const;
		unsigned int getHitpoints( void ) const;
		unsigned int getEnergy_points( void ) const;
		unsigned int getAttack_damage( void ) const;
	private:
		std::string Name;
		int Hitpoints;
		int Energy_points;
		int Attack_damage;
};

std::ostream & operator<<( std::ostream & o, ClapTrap const & cl );

#endif

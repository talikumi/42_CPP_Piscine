#ifndef __ICE_HPP__
# define __ICE_HPP__
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice & src);
		virtual ~Ice();

		virtual void use(ICharacter& target);
		AMateria* clone() const;
};

#endif

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria & src);
		virtual ~AMateria();
		AMateria & operator=(AMateria const & rhs);

		std::string const & getType() const;

		virtual AMateria* clone() const =0;
		virtual void use(ICharacter& target);
};

#endif

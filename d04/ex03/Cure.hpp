#ifndef __CURE_HPP__
# define __CURE_HPP__
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure & src);
		virtual ~Cure();
		Cure & operator=(const Cure & rhs);

		virtual void use(ICharacter& target);
		AMateria* clone() const;
};

#endif

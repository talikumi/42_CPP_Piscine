#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*inventory[4];
	public:
		Character(const std::string name);
		Character(const Character & src);
		~Character();
		Character & operator=(const Character &rhs);

		virtual std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter & target);
};

#endif

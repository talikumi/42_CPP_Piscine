#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	source[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & src);
		~MateriaSource();
		MateriaSource & operator=(const MateriaSource & rhs);

		void learnMateria(AMateria* m);
		AMateria* createMateria(const std::string & type);
};

#endif

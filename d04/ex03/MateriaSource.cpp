#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & src)
{
	std::cout << "MateriaSource Copy Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->source[i] != 0)
			delete this->source[i];
		this->source[i] = src.source[i];
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->source[i];
}

MateriaSource & MateriaSource::operator=(const MateriaSource & rhs)
{
	if (this == &rhs)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (this->source[i] != 0)
			delete this->source[i];
		this->source[i] = rhs.source[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	unsigned int i = 0;

	while (this->source[i])
		i++;
	if (i < 4)
		this->source[i] = m;
}

AMateria* MateriaSource::createMateria(const std::string & type)
{
	for (unsigned int i = 0; i < 4; i++)
		if (this->source[i] && this->source[i]->getType() == type)
			return this->source[i]->clone();
	return 0;
}

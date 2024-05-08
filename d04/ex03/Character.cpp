#include "Character.hpp"

Character::Character(const std::string name)
{
	std::cout << "Character Default Constructor Called" << std::endl;
	this->name = name;
}

Character::Character(const Character & src)
{
	std::cout << "Character Copy Constructor Called" << std::endl;
	this->name = src.getName();
	for(int i = 0; i < 4; i++)
	{
		if(this->inventory[i] != 0)
			delete this->inventory[i];
		this->inventory[i] = src.inventory[i];
	}
}

Character::~Character()
{
	std::cout << "Character Destructor Called" << std::endl;
	for(int i = 0; i < 4; i++)
		delete this->inventory[i];
}

Character & Character::operator=(const Character &rhs)
{
	std::cout << "Character Assigment Called" << std::endl;
	this->name = rhs.getName();
	for(int i = 0; i < 4; i++)
	{
		if(this->inventory[i] != 0)
			delete this->inventory[i];
		this->inventory[i] = rhs.inventory[i];
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	unsigned int i = 0;

	while (this->inventory[i])
		i++;
	if (i < 4)
		this->inventory[i] = m;	
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		unsigned int i;
		for (i = idx; i < 4 - 1; i++)
			this->inventory[i] = this->inventory[i + 1];
	}
}

void Character::use(int idx, ICharacter & target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx] != 0)
		this->inventory[idx]->use(target);
}


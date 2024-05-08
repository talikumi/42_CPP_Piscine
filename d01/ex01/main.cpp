#include "Zombie.hpp"

int main()
{
	int number = 6;
	std::string name = "Nina";
	Zombie *horde = zombieHorde(number, name);

	for(int i = 0; i < number; i++)
		horde[i].announce(name);

	delete [] horde;
    return (0);
}
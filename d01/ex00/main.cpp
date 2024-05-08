#include "Zombie.hpp"

int main()
{
    Zombie *zombie1;
	zombie1 = newZombie("Nina");
	randomChump("Nina");
	zombie1->announce();
	delete zombie1;
    return (0);
}
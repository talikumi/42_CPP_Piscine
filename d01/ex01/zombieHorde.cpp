#include "Zombie.hpp"

Zombie* zombieHorde(int number, std::string name)
{
    Zombie* newHorde = new (std::nothrow) Zombie[number];
    for(int i = 0; i < number; i++)
        newHorde[i].announce(name);
    return newHorde;
}
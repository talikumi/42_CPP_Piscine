#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie copy = Zombie(name);
    copy.announce();
}
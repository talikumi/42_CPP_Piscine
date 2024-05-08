#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
    std::cout << "\nA new zombie called " << this->_name << " has spawned!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " the Zombie has left\n" << std::endl;
    std::cout << std::endl;
}

void Zombie::announce(void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

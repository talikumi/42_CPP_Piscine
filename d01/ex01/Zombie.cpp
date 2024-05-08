#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "\nA new zombie has spawned!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " the Zombie has left\n" << std::endl;
    std::cout << std::endl;
}

void Zombie::announce(std::string _name) {
    this->_name = _name;
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

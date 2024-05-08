#include "HumanB.hpp"

HumanB::HumanB(std::string new_name)
{
    this->name = new_name;
}

void HumanB::setWeapon(Weapon& new_weapon)
{
    this->weapon = &new_weapon;
}

void HumanB::attack()
 {
     std::cout << name << " attacks with his " << weapon->getType() << std::endl;
 }
#include "HumanA.hpp"

 HumanA::HumanA(std::string new_name, Weapon& new_weapon) : weapon(new_weapon)
 {
     this->name = new_name;
 }

void HumanA::attack()
 {
     std::cout << name << " attacks with his " << weapon.getType() << std::endl;
 }
#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:

     std::string name; 
     Weapon *weapon;
    
    public:

     void setWeapon(Weapon& new_weapon);
     void attack();
     HumanB(std::string new_name);
};

#endif
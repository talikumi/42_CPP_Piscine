#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType()
{
    std::string& w_ref = type;
    return w_ref;
}


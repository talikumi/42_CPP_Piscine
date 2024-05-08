#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;
        
    public:    
        void announce(std::string name);
        Zombie();
        ~Zombie();
};

Zombie* zombieHorde(int number, std::string name);

#endif

#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
        public:
                WrongCat();
                WrongCat(const WrongCat & src);
                virtual ~WrongCat();
                WrongCat & operator=(const WrongCat & rhs);
                void makeSound() const;
};

#endif

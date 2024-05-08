#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__
# include <iostream>

class WrongAnimal
{
        protected:
                std::string Type;
        public:
                WrongAnimal();
                WrongAnimal(const WrongAnimal & src);
                virtual ~WrongAnimal();
                WrongAnimal & operator=(const WrongAnimal & rhs);
		std::string getType() const;
                void makeSound() const;
};

#endif

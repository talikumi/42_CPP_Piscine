#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* animal = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " goes ";
		j->makeSound();

		std::cout << i->getType() << " goes ";
		i->makeSound();

		std::cout << animal->getType() << " goes ";
		animal->makeSound();
		delete animal;
		delete j;
		delete i;
	}
	{
		const WrongAnimal* animal = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " goes ";
		i->makeSound();

		std::cout << animal->getType() << " goes ";
		animal->makeSound();
		delete animal;
		delete i;
	}
	return 0;
}

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define NUM 5

int main()
{
	{
		Animal* arca[NUM];
		for(int i = 0; i < NUM/2; i++)
			arca[i] = new Dog();

		for(int i = NUM/2; i < NUM; i++)
			arca[i] = new Cat();
		for(int i = 0; i < NUM; i++)
			delete arca[i];
	}
	{
		Cat kitty1;
		Cat kitty2;

		kitty1.setIdea("Hello Kitties", 0);
		kitty1.setIdea("How are you?", 1);
		kitty1.setIdea("I'm good", 2);
		kitty1.setIdea("All I want is...", 3);
		kitty1.setIdea("Capture the laser pointer", 4);

		// Dog kitty2(kitty1);
		kitty2 = kitty1;
		std::cout << "Check on the Cat copy deep" << std::endl;
		std::cout << "kitty1 add: " << &kitty1 << "; kitty2 add: " << &kitty2 << std::endl;
		std::cout << "kitty1 brain add: " << &(kitty1.getBrain());
		std::cout << "; kitty2 brain add: " << &(kitty2.getBrain()) << std::endl;
		for (int i = 0; i < kitty1.getSize(); i++)
			std::cout << "kitty1 idea " << i << ": " << kitty1.getIdea(i) << std::endl;
		for (int i = 0; i < kitty2.getSize(); i++)
			std::cout << "kitty2 idea " << i << ": " << kitty2.getIdea(i) << std::endl;
	}
	return 0;
}

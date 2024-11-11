#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// const WrongAnimal* Wrongmeta = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	// std::cout << Wrongmeta->getType() << " " << std::endl;
	i->makeSound(); //output the cat sound!
	j->makeSound();
	// meta->makeSound();
	// Wrongmeta->makeSound();

	delete j;
	delete i;
	delete meta;
	// delete Wrongmeta;
    return 0;
}

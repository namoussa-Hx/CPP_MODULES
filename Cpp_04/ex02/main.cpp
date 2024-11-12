#include "Cat.hpp"
#include "Dog.hpp"


int main()
{

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Animal* animals[4];

		animals[0] = new Dog();
		animals[1] = new Dog();
		animals[2] = new Cat();
		animals[3] = new Cat();

	for ( int k = 0; k < 4; k++)
		delete animals[k];

	delete j;
	delete i;
return 0;
}

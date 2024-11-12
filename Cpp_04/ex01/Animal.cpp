#include "Animal.hpp"


Animal::Animal(): type("Animal")
{
   std::cout << "Animal Default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;

}

Animal::Animal(const Animal &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal &Animal::operator=(const Animal &src)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if(this == &src)
         return *this;
    this->type = src.type;
 return *this;
}

std::string Animal::getType(void) const
{
    return this->type;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal sound" << std::endl;
}

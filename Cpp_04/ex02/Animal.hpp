#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
     std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &src);
        Animal &operator = (const Animal &src);

        std::string getType(void) const;
        virtual void makeSound() const = 0;

};

#endif

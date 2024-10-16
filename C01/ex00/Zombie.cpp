#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{

}
Zombie::~Zombie()
{
    std::cout << this->name << ": destroy" << std::endl;
}
void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ" << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

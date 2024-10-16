#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{

}

Zombie::Zombie(void): name("")
{

}

Zombie::~Zombie()
{
    std::cout << this->name << ": destroy" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

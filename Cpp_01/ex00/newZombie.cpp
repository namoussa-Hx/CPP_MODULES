#include "Zombie.hpp"

void deleteZombie(Zombie *ptr)
{
 delete ptr;
}

Zombie* newZombie( std::string name)
{
    Zombie *ptr = new Zombie(name);
    return ptr;
}

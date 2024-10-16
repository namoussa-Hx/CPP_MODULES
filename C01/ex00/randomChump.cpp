#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie *ptr = newZombie(name);
    ptr->announce();
}

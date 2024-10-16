#include "Zombie.hpp"


int main ()
{
    Zombie *foo = newZombie("najib");
    foo->announce();
    randomChump("jack");
    deleteZombie(foo);
    return 0;
}
#include "Zombie.hpp"

int main ()
{
    int n = -1;

    Zombie *ptr = zombieHorde(n, "Zombie");
    if(!ptr)
       return 1;
    for(int i = 0; i < n; i++)
    {
        ptr[i].announce();
    }

    delete[] ptr;
 return 0;
}

#include "Zombie.hpp"

int main ()
{
    int n = 6;
    Zombie *ptr = zombieHorde(n, "Zombie");

    for(int i = 0; i < n; i++)
    {
        ptr[i].announce();
    }

    delete[] ptr;
 return 0;
}

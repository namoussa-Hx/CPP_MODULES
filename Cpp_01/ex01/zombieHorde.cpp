#include "Zombie.hpp"


Zombie* zombieHorde(int n, std::string name)
{
    Zombie *arr = new Zombie[n];

    for(int i = 0; i < n; i++)
    {
        arr[i].set_name(name);
    }
 return arr;
}

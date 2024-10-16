#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <new>

class Zombie
{
    private:
       std::string name;

    public :
    Zombie(std::string name);
    Zombie(void);
    ~Zombie();
  void announce(void);
  void set_name(std::string name);
};

Zombie* zombieHorde(int n, std::string name);
#endif

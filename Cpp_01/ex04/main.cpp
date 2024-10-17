#include "myfile.hpp"

int main (int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "Error: invalide number of argumants " 
        << std::endl;
    }
    exec(av[1], av[2], av[3]);
   return (0);
}
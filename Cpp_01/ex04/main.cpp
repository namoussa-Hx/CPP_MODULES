#include "myfile.hpp"

int main (int ac, char **av)
{
    if(ac != 4 || ac == 1)
    {
        std::cout << "Error: invalide number of argumants " 
        << std::endl;
	return (1);
    }
    exec(av[1], av[2], av[3]);
   return (0);
}

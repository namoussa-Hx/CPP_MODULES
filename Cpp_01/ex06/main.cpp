#include "Harl.hpp"


int main (int ac, char **av)
{
   if(ac == 2)
   {
    Harl obj;
    return (obj.complain(av[1]), 0);
   }
   std::cout << "INVALID NUMBER OF ARGUMENTS!" << std::endl;
    return 0;
}

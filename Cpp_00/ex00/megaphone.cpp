#include <iostream>
#include <string>
#include <cctype>

int main (int ac, char **av)
{
    if(ac > 1)
    {
    for(int i = 1; i < ac; i++)
    {
        std::string str = av[i];
        for(int j = 0; j < (int)str.length(); j++)
        {
            char c = str[j];
            std::cout << (char )std::toupper(c);
        }
    }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
 return 0;
}
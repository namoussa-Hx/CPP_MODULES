#include <iostream>
#include <string>



int main (int ac , char **av)
{
    std::string command;

    while(1)
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);
        if (command == "ADD")
            std::cout << "ADD" << std::endl;
        else if (command == "SEARCH")
            std::cout << "SEARCH" << std::endl;
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command" << std::endl;
    }
    return 0;
}
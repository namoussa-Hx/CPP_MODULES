#include <iostream>
#include <string>

int main ()
{
    std::string ptr = "HI THIS IS BRAIN";
    std::string *stringPTR = &ptr;
    std::string& stringREF = ptr;

    std::cout << "The memory address of the string variable: " << &ptr << std::endl;
    std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of the string variable: " << stringREF << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << ptr << std::endl;


    return 0;
}
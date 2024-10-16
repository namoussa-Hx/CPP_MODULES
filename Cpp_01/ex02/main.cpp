#include <iostream>
#include <string>

int main ()
{
    std::string ptr = "HI THIS IS BRAIN";
    std::string *stringPTR = &ptr;
    std::string& stringREF = *stringPTR;

    std::cout << &ptr << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << stringREF << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << ptr << std::endl;


    return 0;
}
#include <iostream>
#include <string>

int main() {
    std::string text = "Hello, world i am najib a student at 1337!";
    
    std::string str4 = "najib";
    size_t found = text.find(str4);
    if (found != std::string::npos)
{
    std::string str3 = text.substr(found, str4.length());
    std::cout << str3 << std::endl;
}
        
    else
        std::cout << "'world' not found" << std::endl;
    return 0;
}

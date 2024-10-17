#include <iostream>
#include <fstream>

int main (int ac, char **av)
{
    std::ifstream myfile("filename");
    std::ofstream outfile("filename.replace");


    std::string buffer;
    std::string str1 = av[1];
   
   while(std::getline(myfile, buffer))
   {
    size_t found = buffer.find(str1);

    if(found != std::string::npos)
    {
        outfile << "i najiib " << std::endl;

    }

   }

return 0;
}

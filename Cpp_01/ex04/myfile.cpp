#include "myfile.hpp"

void exec(std::string filename, std::string str1,
 std::string str2)
{
    if(filename.empty() || str1.empty() || str2.empty())
    {
        std::cerr << "Error: invalid input" << std::endl;
        return ;
    }

    std::ifstream infile(filename.c_str());
    if(!infile)
    {
        std::cerr << "Error: open infile " << std::endl;
        return ;
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if(!outfile)
    {
        std::cerr << "Error: open outfile " << std::endl;
        infile.close();
        return ;
    }

    std::string buffer;

    while(std::getline(infile, buffer))
    {
        size_t found = 0;
        while ((found = buffer.find(str1)) != std::string::npos)
        {
        buffer.erase(found, str1.length());
        buffer.insert(found, str2);
        found += str2.length();
        }
    outfile << buffer << std::endl;
    }

    infile.close();
    outfile.close();
}

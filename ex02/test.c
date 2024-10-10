#include <iostream>
#include <time.h>
#include <iomanip>

int main ()
{
time_t now = time(0);

tm *ptr = localtime(&now);

std::cout << ptr->tm_year << std::endl;
std::cout <<  1 + ptr->tm_mon << std::endl;
    return 0;
}
#include <iostream>

class Number
{
    public :

     int a;
     int b;

      void set_a(int a);
      int get_a(void);
};


void Number::set_a(int r)
{
    a = r;
}

int Number::get_a(void)
{
    return this->a;
}


int main ()
{
    Number ob1;

    ob1.set_a(20);

    std::cout << ob1.get_a() << std::endl;

    return 0;
}
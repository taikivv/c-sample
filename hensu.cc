#include <iostream>

void hello_world()
{
    std::cout << "Hello_world" << std::endl;
}

void show_sum(int a, int b)
{
    int c =a+b;
    std::cout << c << std::endl;
}

int show_value(int a,int b)
{
    int c = a+b;
    return c;
}

int main()
{
    int x=3 , y=4;
    hello_world();
    show_sum(x,y);
    int z = show_value(x,y);
    std::cout << z <<std::endl;
}



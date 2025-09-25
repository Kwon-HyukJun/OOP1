#include <iostream>
#include "math.h"

int main()
{
    int a, b;
    std::cin>> a >> b;

    std::cout << add(a, b) << std::endl;
    std::cout << multiply(a, b) << std::endl;
    std::cout << add(a, a, b) << std::endl;
    std::cout << add(1.5 , 8.9) << std::endl;

    return 0;
}

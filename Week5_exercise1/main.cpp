#include <iostream>
#include <string>

int main()
{
    std::string num_a, num_b;
    std::cin >> num_a >> num_b;

    std::string reversed_a = "", reversed_b = "";

    for(int i = 2; i >= 0; i--)
        reversed_a += num_a[i];

    for(int i = 2; i >= 0; i--)
        reversed_b += num_b[i];

    if(reversed_a > reversed_b)
        std::cout << reversed_a;
    else
        std::cout << reversed_b;

    return 0;
}

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

    int flag = -1;

    if(reversed_a[0] < reversed_b[0])
        flag = 1;
    else if(reversed_a[0] == reversed_b[0]){
        if (reversed_a[1] < reversed_b[1])
            flag = 1;
        else if(reversed_a[1] == reversed_b[1] && reversed_a[2] < reversed_b[2])
            flag = 1;
        else if(reversed_a[1] == reversed_b[1] && reversed_a[2] == reversed_b[2])
            flag = 0
    }

    if(flag == 0)
        std::cout << "reversed_a == reversed_b";
    else if(flag == 1)
        std::cout << "reversed_a < reversed_b";
    else
        std::cout << "reversed_a > reversed_b";

    return 0;
}

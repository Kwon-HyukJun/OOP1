#include <iostream>

namespace {
    void log_calculation(int result)
    {
        std::cout << "LOG: Calculation performed, result is " << result << std::endl;
    }
}

namespace OOPCourse {
    namespace Math {
        int add_and_log(int a, int b)
        {
            log_calculation(a + b);
            return a + b;
        }
    }
}

int main()
{
    std::cout << OOPCourse::Math::add_and_log(15, 27);
    return 0;
}

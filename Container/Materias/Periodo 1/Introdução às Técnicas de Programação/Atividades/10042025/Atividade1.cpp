#include <iostream>

int main()
{
    int input;
    std::cin >> input;

    for (int i = -1; i < input; ++i)
    {
        long currentOutput = (long) 2 << (long) i;
        std::cout << currentOutput << ' ';
    }

    return 0;
}
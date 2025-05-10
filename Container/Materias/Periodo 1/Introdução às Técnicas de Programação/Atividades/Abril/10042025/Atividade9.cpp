#include <iostream>

bool IsPerfect(int test)
{
    int adder = 0;
    for (int i = 1; i < test - 1; i++)
    {
        if (test % i == 0)
        {
            adder += i;
        }
        if (adder > test)
        {
            return false;
        }
    }

    return adder == test;
}

int main()
{

    int number;
    std::cin >> number;

    for (int i = 1; i < number; i++)
    {
        if (IsPerfect(i))
        {
            std::cout << i << ' ';
        }
    }

    return 0;
}
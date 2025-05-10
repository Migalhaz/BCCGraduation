#include <iostream>

int main()
{
    int inputN, inputI, inputJ;

    std::cin >> inputN >> inputI >> inputJ;

    for (int i = 1; i < inputN + 1; ++i)
    {
        int rI, rJ;
        rI = inputI * i;
        rJ = inputJ * i;

        if (rI == rJ)
        {
            std::cout << rI << ' ';
            continue;
        }

        std::cout << rI << ' ' << rJ << ' ';
    }
    return 0;
}
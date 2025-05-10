#include <iostream>

int main()
{
    int N, V;

    std::cin >> N >> V;

    int vCount = 0;
    for (int i = 0; i < N; ++i)
    {
        int newNumber;
        std::cin >> newNumber;
        
        if (newNumber == V)
        {
            ++vCount;
        }
    }

    std::cout << vCount << '\n';

    return 0;
}
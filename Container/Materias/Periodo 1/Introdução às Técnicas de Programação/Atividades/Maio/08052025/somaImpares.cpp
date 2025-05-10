#include <iostream>

int main()
{
    int pairCount;
    std::cin >> pairCount;
    int results[pairCount];

    for (int i = 0; i < pairCount; ++i)
    {
        int x;
        int y;
        std::cin >> x >> y;
        int result = 0;
        for (int j = x + 1; j < y; ++j){
            if ((j%2) != 0)
            {
                result += j;
            }
        }
        results[i] = result;
    }

    for (int r : results)
    {
        std::cout << r << '\n';
    }

    return 0;
}
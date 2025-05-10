#include <iostream>

int main()
{
    int maxHeight = 0;

    int count;
    std::cin >> count;

    int heights[count] = {0};


    for (int i = 0; i < count; ++i)
    {
        int height;
        std::cin >> height;
        heights[i] = height;
        if (height > maxHeight)
        {
            maxHeight = height;
        }
    }

    int firstIndex = -1;
    int secondIndex = 0;
    for (int i = 0; i < count; ++i)
    {
        if (heights[i] == maxHeight)
        {
            if (firstIndex == -1)
            {
                firstIndex = i;
                secondIndex = i+1;
                continue;
            }
            secondIndex = i;
        }
    }

    std::cout << (secondIndex - firstIndex - 1) << '\n';
    return 0;
}
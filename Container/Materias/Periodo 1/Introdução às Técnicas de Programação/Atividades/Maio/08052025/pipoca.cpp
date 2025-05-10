#include <iostream>
#include <string>

int main()
{
    int count;
    std::cin >> count;

    int leftCount = 0;
    int rightCount = 0;
    bool countingRight = false;

    for (int i = 0; i < count; i++)
    {
        int rep;
        std::cin >> rep;
        if (rep == 2)
        {
            countingRight = true;
            continue;
        }

        if (countingRight)
        {
            rightCount += rep;
        }
        else
        {
            leftCount += rep;
        }
    }

    std::string result = "tanto faz\n";
    if (leftCount < rightCount)
    {
        result = "esquerda\n";
    }

    if (rightCount < leftCount)
    {
        result = "direita\n";
    }

    std::cout << result;
    return 0;
}
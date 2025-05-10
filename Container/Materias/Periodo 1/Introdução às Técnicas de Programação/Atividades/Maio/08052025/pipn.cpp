#include <iostream>

int main()
{
    int count = 5;
    
    int evenNum = 0;
    int oddNum = 0;
    int positives = 0;
    int negatives = 0;

    for (int i = 0; i < count; ++i)
    {
        int num;
        std::cin >> num;

        if (num > 0)
        {
            ++positives;
        }
        if (num < 0)
        {
            ++negatives;
        }

        if ((num % 2) == 0)
        {
            ++evenNum;
        }
        else
        {
            ++oddNum;
        }
    }

    std::cout << evenNum << " valores pares\n";
    std::cout << oddNum << " valores impares\n";
    std::cout << positives << " valores positivos\n";
    std::cout << negatives << " valores negativos\n";
    return 0;
}
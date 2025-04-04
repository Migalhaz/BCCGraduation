#include <iostream>

int main()
{
    int peopleCount;
    std::cin >> peopleCount;

    int personPoint = -1;
    int maiorPonto = -1;

    for (int i = 0; i < peopleCount; i++)
    {
        int currentPoint;
        std::cin >> currentPoint;

        if (i == 0)
        {
            personPoint = currentPoint;
            continue;
        }
        if (currentPoint > maiorPonto)
        {
            maiorPonto = currentPoint;
        }
    }

    if (personPoint > maiorPonto)
    {
        std::cout << 0;
    }
    else
    {
        std::cout << maiorPonto - personPoint + 1;
    }

    return 0;
}
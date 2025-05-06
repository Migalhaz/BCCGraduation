#include <iostream>

int main()
{
    int input;
    std::cin >> input;

    float media;

    for (int i = 0; i < input; i++)
    {
        float newNumber;
        std::cin >> newNumber;
        media += newNumber;
    }

    std::cout << (media / (float)input) << '\n';

    return 0;
}
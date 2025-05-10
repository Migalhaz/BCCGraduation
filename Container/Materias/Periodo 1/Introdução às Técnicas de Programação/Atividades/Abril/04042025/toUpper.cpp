#include <iostream>

int main()
{
    char letra;
    std::cin >> letra;

    char upper = letra - 32;
    std::cout << upper << '\n';

    return 0;
}
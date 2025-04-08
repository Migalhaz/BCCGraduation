#include <iostream>

int main()
{
    double input;
    std::cin >> input;

    int intPart = input / 1;

    int frac = 10 * (input - intPart);

    std::cout << "Parte inteira: " << intPart << '\n';
    std::cout << "Parte decimal: " << frac;

    frac = 100 * (input-intPart) - (10 * frac);

    std::cout << frac << '\n';
    return 0;
}
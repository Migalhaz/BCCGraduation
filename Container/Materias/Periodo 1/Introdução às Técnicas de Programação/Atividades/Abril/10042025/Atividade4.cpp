#include <iostream>

int main()
{
    int input;
    
    std::cin >> input;

    int nonPositive = 0;


    for (int i = 0; i < input; i++)
    {
        int newNumber;
        std::cin >> newNumber;
        if (newNumber <= 0)
        {
            ++nonPositive;
        }
    }

    std::cout << 
    "Positivos: " << (input - nonPositive) << '\n' <<
    "Nao positivos: " << nonPositive << '\n';
    return 0;
}
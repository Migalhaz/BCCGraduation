#include <iostream>

void IntSolution()
{
    std::cout << "Resolucao do problema utilizando int!\n"; 
    std::cout << "Insira um número de 3 dígitos: \n"; 

    int input;
    std::cin >> input;
    std::cout << "O resultado e: ";
    std::cout << input % 10;
    input /= 10;
    std::cout << input % 10;
    input /= 10;
    std::cout << input << "\n";
}

void CharSolution()
{
    std::cout << "Resolucao do problema utilizando char!\n"; 
    std::cout << "Insira um número de 3 dígitos: \n"; 
    char input[3];

    std::cin >> input;

    char temp = input[0];
    input[0] = input[2];
    input[2] = temp;
    std::cout << "O resultado e: " << input << "\n";
}

int main()
{
    CharSolution();
    IntSolution();

    return 0;
}
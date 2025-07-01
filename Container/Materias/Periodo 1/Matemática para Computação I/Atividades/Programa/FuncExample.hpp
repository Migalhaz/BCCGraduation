#include <iostream>
#include "MyMath.hpp"
#include "ConsoleHandler.hpp"
#include "Settings.hpp"


void ExplainFloor()
{
    if (explain)
    {
        std::cout << "A função piso pega um número real e arrendonda para o maior inteiro que é menor ou igual a ele.\n";
    }
    if (showExamples)
    {
        std::cout << "Exemplos:\n";
        std::cout << "O resultado da função piso do número 3.9 é 3.\n";
        std::cout << "Pois o maior número inteiro <= 3.9 é 3.\n";
        std::cout << "\nO resultado da função piso do número -1.01 é -2.\n";
        std::cout << "Pois o maior número inteiro <= -1.01 é -2.\n";
    }
}

void ExplainCeil()
{
if (explain)
    {
        std::cout << "A função piso pega um número real e arrendonda para o menor inteiro que é maior ou igual a ele.\n";
    }
    if (showExamples)
    {
        std::cout << "Exemplos:\n";
        std::cout << "O resultado da função teto do número 3.1 é 4.\n";
        std::cout << "Pois o menor número inteiro >= 3.1 é 4.\n";
        std::cout << "\nO resultado da função teto do número -1.99 é -1.\n";
        std::cout << "Pois o menor número inteiro >= -1.99 é -1.\n";
    }
}

void ShowFloorExample()
{
    ClearConsole();
    ExplainFloor();
    double input;
    GetInput(input, "Insira um valor quebrado: ");
    double result = MyMath::Floor(input);
    std::cout << "O resultado da operação é: " << result << '\n';
    AwaitInput();
}

void ShowCeilExample()
{
    ClearConsole();
    ExplainCeil();
    double input;
    GetInput(input, "Insira um valor quebrado: ");
    double result = MyMath::Ceil(input);
    std::cout << "O resultado da operação é: " << result << '\n';
    AwaitInput();
}
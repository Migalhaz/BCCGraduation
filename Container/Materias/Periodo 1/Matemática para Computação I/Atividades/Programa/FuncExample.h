#include <iostream>
#include "MyMath.h"
#include "ConsoleHandler.h"
#include "Settings.h"


void ExplainFloor()
{
    if (explain)
    {
        std::cout << "A função piso pega um número real e arrendonda para o maior inteiro que eh menor ou igual a ele.\n";
    }
    if (showExamples)
    {
        std::cout << "Exemplos:\n";
        std::cout << "O resultado da função piso do número 3.9 eh 3.\n";
        std::cout << "Pois o maior número inteiro <= 3.9 eh 3.\n";
        std::cout << "\nO resultado da função piso do número -1.01 eh -2.\n";
        std::cout << "Pois o maior número inteiro <= -1.01 eh -2.\n";
    }
}

void ExplainCeil()
{

}

void ShowFloorExample()
{
    ClearConsole();
    ExplainFloor();
    double input;
    GetInput(input, "Insira um valor quebrado: ");
    double result = MyMath::Floor(input);
    std::cout << "O resultado da operacao eh: " << result << '\n';
    AwaitInput();
}

void ShowCeilExample()
{
    ClearConsole();
    ExplainCeil();
    double input;
    GetInput(input, "Insira um valor quebrado: ");
    double result = MyMath::Ceil(input);
    std::cout << "O resultado da operacao eh: " << result << '\n';
    AwaitInput();
}
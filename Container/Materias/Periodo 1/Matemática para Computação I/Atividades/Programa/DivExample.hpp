#include <iostream>
#include "MyMath.hpp"
#include "ConsoleHandler.hpp"

void ExplainDiv()
{
    ClearConsole();
    if (showExamples)
    {
        std::cout << "Isso é um exemplo de divisão: ";
        std::cout << "10/2 = " << MyMath::Divide(10, 2) << '\n';
        std::cout << "pois 10 = 2 * 5 + 0\nSendo, 10 o dividendo, 2 divisor, 5 o Quociente e 0 o resto!";
    }
}

void ShowDivExample()
{
    ExplainDiv();

    double dividendo = 0;
    double divisor = 0;
    
    GetInput(dividendo, "Insira o dividendo: ");
    GetInput(divisor, "Insira o divisor: ");
    
    double resultado;
    double resto;

    if (divisor == 0)
    {
        std::cout << "Não é possível dividir por 0!\n";
        AwaitInput();
        return;
    }
    
    MyMath::DivideInteger(dividendo, divisor, resultado, resto);
    
    std::cout << "O resultado de " << dividendo << '/' << divisor;
    std::cout << " é: " << resultado << " com resto: " << resto << '\n';
    
    AwaitInput();
}
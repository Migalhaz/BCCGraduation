#include <iostream>
#include "MyMath.h"
#include "ConsoleHandler.h"

void ExplainDiv()
{
    ClearConsole();
    std::cout << "Isso eh um exemplo de divisao: ";
    std::cout << "10/2 = " << MyMath::Divide(10, 2) << '\n';
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
        std::cout << "Nao eh possivel dividir por 0!\n";
        AwaitInput();
        return;
    }
    
    MyMath::DivideInteger(dividendo, divisor, resultado, resto);
    
    std::cout << "O resultado de " << dividendo << '/' << divisor;
    std::cout << " eh: " << resultado << " com resto: " << resto << '\n';
    
    AwaitInput();
}
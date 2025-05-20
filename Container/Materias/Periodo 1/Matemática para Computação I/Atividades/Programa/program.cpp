#include <iostream>
#include "DivExample.h"
#include "FuncExample.h"
#include "PrimeExample.h"

void ShowOptions()
{
    ClearConsole();
    std::cout << "Escolha uma opcao:\n";
    std::cout << "[1] Divisao\n";
    std::cout << "[2] Funcao Piso\n";
    std::cout << "[3] Funcao Teto\n";
    std::cout << "[4] Primos\n";
    std::cout << "[q] Sair\n";
}

int main()
{
    while (true)
    {
        ShowOptions();
        char input;
        std::cin >> input;

        if (input == '1')
        {
            ShowDivExample();
        }
        if (input == '2')
        {
            ShowFloorExample();
        }
        if (input == '3')
        {
            ShowCeilExample();
        }
        if (input == '4')
        {
            PrimesMenu();
        }
        if (input == 'q' || input == 'Q')
        {
            break;
        }

    }
    return 0;
}
#include <iostream>
#include "Settings.h"
#include "MathMenu.h"
#include "CryptoMenu.h"


void ShowOptions()
{
    ClearConsole();
    std::cout << "=== MENU ===\n";
    std::cout << "[1] Matematica\n";
    std::cout << "[2] Criptografia\n";
    std::cout << "[q] Sair\n";
    std::cout << "\nEscolha uma opcao: ";
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
            ShowMathMenu();
        }
        if (input == '2')
        {
            ShowCryptoMenu();            
        }
        if (input == 'q' || input == 'Q')
        {
            break;
        }
    }
    ClearConsole();
    return 0;
}
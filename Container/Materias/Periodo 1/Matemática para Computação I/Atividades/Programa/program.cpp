#include <iostream>
#include "Settings.hpp"
#include "MathMenu.hpp"
#include "CryptoMenu.hpp"

void ShowOptions()
{
    ClearConsole();
    std::cout << "=== MENU ===\n";
    std::cout << "[1] Matemática\n";
    std::cout << "[2] Criptografia\n";
    std::cout << "[q] Sair\n";
    std::cout << "\nEscolha uma opção: ";
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
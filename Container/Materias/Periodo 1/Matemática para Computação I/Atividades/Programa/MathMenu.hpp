#pragma once
#include <iostream>
#include "DivExample.hpp"
#include "FuncExample.hpp"
#include "PrimeExample.hpp"
#include "MDCExample.hpp"


void SettingsOptions();
void ShowMathOptions();
void ShowBasicOptions();
void BasicOperations();
void ShowMathMenu();
void ShowSettingsMenu();

void ShowMathOptions()
{
    ClearConsole();
    std::cout << "=== MATEMÁTICA ===\n";
    std::cout << "[1] Funções básicas\n";
    std::cout << "[2] Primos\n";
    std::cout << "[3] MDC\n";
    std::cout << "[4] Configurações\n";
    std::cout << "[q] Voltar\n";
    std::cout << "\nEscolha uma opção: ";
}

void ShowBasicOptions()
{
    ClearConsole();
    std::cout << "=== FUNCOES BÁSICAS ===\n";
    std::cout << "[1] Divisão\n";
    std::cout << "[2] Função Piso\n";
    std::cout << "[3] Função Teto\n";
    std::cout << "[q] Voltar\n";
    std::cout << "\nEscolha uma opção: ";
}

void BasicOperations()
{
    while (true)
    {
        ShowBasicOptions();
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
        if (input == 'q' || input == 'Q')
        {
            break;
        }
    }
    ClearConsole();
}



void ShowMathMenu()
{
    while (true)
    {
        ShowMathOptions();
        char input;
        std::cin >> input;

        if (input == '1')
        {
            BasicOperations();
        }
        if (input == '2')
        {
            PrimesMenu();
        }
        if (input == '3')
        {
            MDCMenu();
        }
        if (input == '4')
        {
            ShowSettingsMenu();
        }
        if (input == 'q' || input == 'Q')
        {
            break;
        }
    }
    ClearConsole();
}


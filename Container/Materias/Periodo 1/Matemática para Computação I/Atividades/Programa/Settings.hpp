#pragma once
#include <iostream>
#include "ConsoleHandler.hpp"

extern bool showExamples = true;
extern bool explain = true;
extern bool verboseFunc = true;
extern char activeSetting[2] = {' ', '+'};

void SettingsOptions()
{
    ClearConsole();
    std::cout << "=== CONFIGURAÇÃO ===\n";
    std::cout << "[1] Monstrar explicação [" << activeSetting[explain] << "]\n";
    std::cout << "[2] Mostrar exemplos [" << activeSetting[showExamples] << "]\n";
    std::cout << "[3] Mostrar processo: [" << activeSetting[verboseFunc] << "]\n";
    std::cout << "[q] Voltar\n";
    std::cout << "\nEscolha uma opção: ";
}

void ShowSettingsMenu()
{
    while (true)
    {
        SettingsOptions();
        char input;
        std::cin >> input;
        if (input == 'q' || input == 'Q')
        {
            break;
        }
        if (input == '1')
        {
            explain = !explain;
        }
        if (input == '2')
        {
            showExamples = !showExamples;
        }
        if (input == '3')
        {
            verboseFunc = !verboseFunc;
        }
    }
}
#pragma once
#include <iostream>

template <typename T>
void GetInput(T& value, std::string message = "")
{
    if (!message.empty())
    {
        std::cout << message;
    }
    std::cin >> value;
}

void ClearConsole()
{
    #ifdef _WIN32
        std::system("cls");
    #else
        std::system("clear");
    #endif
}

void AwaitInput()
{
    #ifdef _WIN32
        system("pause");
    #else
        std::cin.clear();
        std::cout << "Pressione enter para continuar...\n";
        std::cin.get();
        std::cin.ignore();
    #endif
}
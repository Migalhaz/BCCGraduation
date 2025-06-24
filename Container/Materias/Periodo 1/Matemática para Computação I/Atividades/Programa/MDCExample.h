#include <iostream>
#include "MyMath.h"
#include "ConsoleHandler.h"
#include "Settings.h"

void ShowMDCMenu()
{
    ClearConsole();
    char verboseChar = activeSetting[verboseFunc];
    std::cout << "=== MDC ===\n";
    std::cout << "[1] MDC (Algoritmo de Euclides)\n";
    std::cout << "[2] MDC Estendido (Teorema de Bezout)\n";
    std::cout << "[q] Voltar\n";
    std::cout << "\nEscolha uma opcao: ";
}

void ExplainMDC()
{
    ClearConsole();
}

void ShowMDCExample()
{
    ExplainMDC();
    int a, b;
    GetInput(a, "Insira o primeiro valor: ");
    GetInput(b, "Insira o segundo valor: ");
    int r;
    if (verboseFunc)
    {
        r = MyMath::MDC_Verbose(a, b);
    }
    else
    {
        r = MyMath::MDC(a, b);
    }
    std::cout << "O resultado do MDC entre " << a << " e " << b << " eh: " << r << '\n'; 

    AwaitInput();
}

void ExplainBezout()
{
    ClearConsole();
}

void ShowBezoutExample()
{
    ExplainBezout();
    int a, b;
    GetInput(a, "Insira o primeiro valor: ");
    GetInput(b, "Insira o segundo valor: ");
    MyMath::BezoutMethodResult r = MyMath::BezoutMethodResult(0, 0, 0);

    if (verboseFunc)
    {
        r = MyMath::BezoutMethod_Verbose(a, b);
    }
    else
    {
        r = MyMath::BezoutMethod(a, b);
    }
    std::cout << "a combinação linear de a*s + b*t = MDC(a, b) é s = " << r.s << " t = " << r.t << "!\n";
    AwaitInput();
}

void MDCMenu()
{
    while (true)
    {
        ShowMDCMenu();
        char input;
        std::cin >> input;
        if (input == 'q' || input == 'Q')
        {
            break;
        }
        if (input == '1')
        {
            ShowMDCExample();
        }
        if (input == '2')
        {
            ShowBezoutExample();
        }
    }
}
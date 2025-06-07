#include <iostream>
#include <vector>
#include "ConsoleHandler.h"
#include "MyMath.h"

void CheckPrime();
void IntervalPrime();

void ShowMenu()
{
    ClearConsole();
    std::cout << "Escolha uma opcao:\n";
    std::cout << "[1] Verificar se numero eh primo\n";
    std::cout << "[2] Encontrar primos em intervalo\n";
    std::cout << "[q] Voltar\n";
}

void PrimesMenu()
{
    while(true)
    {
        ShowMenu();
        char input;
        std::cin >> input;

        if (input == 'q' || input == 'Q')
        {
            break;
        }
        if (input == '1')
        {
            CheckPrime();
        }
        if (input == '2')
        {
            IntervalPrime();
        }
    }
}

void CheckPrime()
{
    ClearConsole();
    int input;
    GetInput(input, "Insira um valor: ");
    if(MyMath::IsPrime(input))
    {
        std::cout << "O numero " << input << " eh primo!\n";
    }
    else
    {
        std::cout << "O numero " << input << " nao eh primo!\n";
    }
    AwaitInput();
}

void IntervalPrime()
{
    ClearConsole();
    int min, max;
    GetInput(min, "Insira o valor minimo do intervalo: ");
    GetInput(max, "Insira o valor maximo do intervalo: ");
    std::vector<int> primes = MyMath::GetPrimes(min, max);
    if (primes.size() == 0)
    {
        std::cout << "Nao existem numeros primos entre " << min << " e " << max << '\n';
    }
    else
    {
        int count = 0;
        for(int p : primes)
        {
            std::cout << p << ' ';
            ++count;
            if (count == 10)
            {
                std::cout << '\n';
            }
            count = 0;
        }
        std::cout << '\n';
    }
    AwaitInput();
}
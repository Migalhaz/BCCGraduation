#include <iostream>
#include <vector>
#include "ConsoleHandler.hpp"
#include "MyMath.hpp"

void CheckPrime();
void IntervalPrime();

void ShowMenu()
{
    ClearConsole();
    std::cout << "=== PRIMOS ===\n";
    std::cout << "[1] Verificar se numero é primo\n";
    std::cout << "[2] Encontrar primos em intervalo\n";
    std::cout << "Escolha uma opção:\n";
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
        std::cout << "O número " << input << " é primo!\n";
    }
    else
    {
        std::cout << "O número " << input << " não é primo!\n";
    }
    AwaitInput();
}

void IntervalPrime()
{
    ClearConsole();
    int min, max;
    GetInput(min, "Insira o valor mínimo do intervalo: ");
    GetInput(max, "Insira o valor máximo do intervalo: ");
    std::vector<int> primes = MyMath::GetPrimes(min, max);
    if (primes.size() == 0)
    {
        std::cout << "Não existem números primos entre " << min << " e " << max << '\n';
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
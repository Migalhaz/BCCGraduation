#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <random>
#include <chrono>
#include "ConsoleHandler.hpp"
#include "Crypto.hpp"
#include "MyMath.hpp"

std::string currentDecryptedMessage = "";
std::vector<long long> currentEncryptedMessage;
MyCrypto::RSAKey currentKey = MyCrypto::RSAKey();

bool KeyDefine()
{
    if (currentKey.p == 0)
    {
        return false;
    }

    if (currentKey.q == 0)
    {
        return false;
    }

    if (currentKey.n == 0)
    {
        return false;
    }

    if (currentKey.totiente == 0)
    {
        return false;
    }

    if (currentKey.e == 0)
    {
        return false;
    }

    if (currentKey.d == 0)
    {
        return false;
    }

    return true;
}

void RSAMenuOptions()
{
    ClearConsole();
    std::cout << "=== RSA ===\n";
    std::cout << "[1] Definir mensagem\n";
    std::cout << "[2] Definir chave\n";

    std::cout << "[3] Mostrar configurações atuais\n";
    
    if (KeyDefine())
    {
        if(!currentDecryptedMessage.empty())
        {
            std::cout << "[4] Criptografar mensagem\n";
        }
        if(currentEncryptedMessage.size() > 0)
        {
            std::cout << "[5] Descriptografar\n";
        }
    }

    std::cout << "[q] Voltar\n";
    std::cout << "\nEscolha uma opcao: ";
}

int GetRandomPrime(int minInclusive, int maxInclusive)
{
    std::vector<int> primes = MyMath::GetPrimes(minInclusive, maxInclusive);
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 generator(seed);
    std::uniform_int_distribution<> distribution(0, primes.size() - 1);
    int randomIndex = distribution(generator);
    return primes[randomIndex];
}

std::string DefineDecryptedMessage()
{
    ClearConsole();
    std::cout << "Digite sua mensagem: \n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::string result;
    std::getline(std::cin, result);
    return result;
}

std::vector<long long> DefineEncryptedMessage()
{
    ClearConsole();
    std::cout << "Digite sua mensagem criptografada: \n";
    long long item;
    std::string input;

    currentEncryptedMessage.clear();
    while (true)
    {
        std::cin >> input;
        try
        {
            item = std::stoll(input);
            if (item < 0)
            {
                throw std::invalid_argument("Value cannot be negative.");
            }
            currentEncryptedMessage.push_back(item);
        }
        catch (...)
        {
            std::cout << "Operação encerrada!\n";
            break;
        }
    }
    return currentEncryptedMessage;
}

void DefineMessageMenuOptions()
{
    ClearConsole();
    std::cout << "=== Mensagem ===\n";
    std::cout << "[1] Definir mensagem descriptografada\n";
    std::cout << "[2] Definir mensagem criptografada\n";
    std::cout << "[q] Voltar\n";
    std::cout << "\nEscolha uma opção: ";
}

void GenerationKeyMenuOptions()
{
    ClearConsole();
    std::cout << "=== Gerando Chave ===\n";
    std::cout << "[1] Definir chave manualmente\n";
    std::cout << "[2] Gerar nova chave\n";
    std::cout << "[q] Voltar\n";
    std::cout << "\nEscolha uma opção: ";
}

void ShowSetMessageMenu()
{
    while(true)
    {
        DefineMessageMenuOptions();
        char input;
        std::cin >> input;
        if (input == 'q' || input == 'Q')
        {
            break;
        }
        if (input == '1')
        {
            currentDecryptedMessage = DefineDecryptedMessage();
            AwaitInput();
            break;
        }
        if (input == '2')
        {
            currentEncryptedMessage = DefineEncryptedMessage();
            AwaitInput();
            break;
        }
    }
}

void ShowGenerationKeyMenu()
{
    while(true)
    {
        GenerationKeyMenuOptions();
        char input;
        std::cin >> input;
        if (input == 'q' || input == 'Q')
        {
            break;
        }

        if (input == '1')
        {
            ClearConsole();
            long long p, q, e, d;

            std::cout << "Digite o valor de p: ";
            std::cin >> p;
            if (!MyMath::IsPrime(p))
            {
                std::cout << "p deve ser um número primo!\nOperação cancelada!\n";
                AwaitInput();
                break;
            }

            std::cout << "Digite o valor de q: ";
            std::cin >> q;
            if (!MyMath::IsPrime(q))
            {
                std::cout << "q deve ser um número primo!\nOperação cancelada!\n";
                AwaitInput();
                break;
            }

            long long tot = (p-1) * (q-1);

            std::cout << "Digite o valor de e: \n";
            std::cout << "Digite -1 para que o sistema encontre um e válido\n";
            std::cin >> e;

            if (e != -1)
            {
                if (std::gcd(e, tot) != 1)
                {
                    std::cout << "e deve ser coprimo com o totiente de n [(p-1) * (q-1)]!\nOperação cancelada!\n";
                    AwaitInput();
                    break;
                }
            }

            std::cout << "Digite o valor de d: \n";
            std::cout << "Digite -1 para que o sistema encontre um d válido\n";
            std::cin >> d;
            if (d != -1)
            {
                if (((d*e)%tot) != 1)
                {
                    std::cout << "d deve ser o inverso modular de e!\nOperação cancelada!\n";
                    AwaitInput();
                    break;
                }
                if (d < 0)
                {
                    std::cout << "d deve ser positivo!\nOperação cancelada!\n";
                    AwaitInput();
                    break;
                }
            }

            currentKey = MyCrypto::RSAKey(p, q);
            if (e != -1)
            {
                currentKey.e = e;
                currentKey.d = currentKey.GeneratePrivateExpo();
            }
            if (d != -1)
            {
                currentKey.d = d;
            }
            std::cout << "Operação completa!\n";
            AwaitInput();
            break;
        }

        if (input == '2')
        {
            ClearConsole();
            std::cout << "Escolhendo primo aleatório para p!\n";
            int p = GetRandomPrime(200, 10000);
            std::cout << "p foi definido como: " << p << "!\n";

            std::cout << "Escolhendo primo aleatório para q!\n";
            int q = GetRandomPrime(200, 10000);
            std::cout << "q foi definido como: " << q << "!\n";

            currentKey = MyCrypto::RSAKey(p, q);
            std::cout << "Operação completa!\n";
            AwaitInput();
            break;
        }
    }
}

void ShowRSAMenu()
{
    while(true)
    {
        RSAMenuOptions();
        char input;
        std::cin >> input;
        if (input == 'q' || input == 'Q')
        {
            break;
        }

        if (input == '1')
        {
            ShowSetMessageMenu();
        }

        if (input == '2')
        {
            ShowGenerationKeyMenu();
        }

        if (input == '3')
        {
            ClearConsole();
            std::cout << "Mensagem descriptografada atual: " << currentDecryptedMessage << '\n';
            std::cout << "Mensagem encriptografada atual: ";
            for(long long c : currentEncryptedMessage)
            {
                std::cout << c << ' ';
            }
            std::cout << '\n';

            std::cout << "Chave: \n";
            std::cout << "p: " << currentKey.p << '\n';
            std::cout << "q: " << currentKey.q << '\n';
            std::cout << "n (p * q): " << currentKey.n << '\n';
            std::cout << "totiente [(p-1) * (q-1)]: " << currentKey.totiente << '\n';
            std::cout << "e: " << currentKey.e << '\n';
            std::cout << "d: " << currentKey.d << '\n';
            AwaitInput();
        }

        if (!KeyDefine())
        {
            continue;
        }

        if (input == '4' && !currentDecryptedMessage.empty())
        {
            ClearConsole();
            std::cout << "Criptografando a mensagem: " << currentDecryptedMessage << "!\n";
            currentEncryptedMessage = MyCrypto::EncryptMessage(currentDecryptedMessage, currentKey);
            std::cout << "Resultado: ";
            for(long long i : currentEncryptedMessage)
            {
                std::cout << i << ' ';
            }
            std::cout << '\n';
            AwaitInput();
        }

        if (input == '5' && currentEncryptedMessage.size() > 0)
        {
            ClearConsole();
            std::cout << "Descriptografando a mensagem: ";
            for (long long c : currentEncryptedMessage)
            {
                std::cout << c << ' ';
            }
            std::cout << '\n';

            currentDecryptedMessage = MyCrypto::DencryptMessage(currentEncryptedMessage, currentKey);
            std::cout << "Resultado: " << currentDecryptedMessage << '\n';
            AwaitInput();
        }
    }
}
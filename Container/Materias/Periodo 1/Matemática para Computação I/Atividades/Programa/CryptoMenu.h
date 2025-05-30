#include <iostream>
#include <string>

#include "Crypto.h"
#include "ConsoleHandler.h"

void CryptoMenuOptions()
{
    ClearConsole();
    std::cout << "=== CRIPTOGRAFIA ===\n";
    std::cout << "[1] Cifra de cesar\n";
    std::cout << "[2] RSA\n";
    std::cout << "[q] Voltar\n";
    std::cout << "\nEscolha uma opcao: ";
}

void CesarExample()
{
    ClearConsole();
    
    std::string msg = "";
    std::cout << "Digite a mensagem: \n";
    while(std::getline(std::cin, msg, '\n'))
    {
        if (msg != "")
        {
            break;
        }
    }
    
    std::cout << "Insira uma chave (numero inteiro): ";

    int key;
    std::cin >> key;
    
    std::string result = MyCrypto::Cesar(msg, key);
    std::cout << "O resultado eh: \n" << result << '\n';
    AwaitInput();
}

void ShowCryptoMenu()
{
    while(true)
    {
        CryptoMenuOptions();
        char input;
        std::cin >> input;
        if (input == 'q' || input == 'Q')
        {
            break;
        }

        if (input == '1')
        {
            CesarExample();            
        }
    }   
}

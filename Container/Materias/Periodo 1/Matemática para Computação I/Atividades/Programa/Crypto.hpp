#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <numeric>
#include <vector>
#include "MyMath.hpp"


namespace MyCrypto
{
    std::string Cesar(std::string message, int key)
    {
        int max = 26;
        key = key % max;
        if (key == 0) return message;


        for (int i = 0; i < message.length(); ++i)
        {
            int firstChar;
            int lastChar;

            if (message[i] >= 'A' && message[i] <= 'Z')
            {
                firstChar = 'A';
                lastChar = 'Z';
            } 
            else if (message[i] >= 'a' && message[i] <= 'z')
            {
                firstChar = 'a';
                lastChar = 'z';
            }
            else
            {
                continue;
            }

            int charIndex = ((message[i] - firstChar + key) % max);
            int startChar = charIndex >= 0 ? firstChar : lastChar + 1;
            int newChar = startChar + charIndex;
            message[i] = newChar;
        }

        return message;
    }

    struct RSAKey
    {
        long long p, q, n, e, d, totiente = 0;
        MyMath::BezoutMethodResult bezout = MyMath::BezoutMethodResult(0, 0, 0);

        long long GeneratePublicExpo()
        {
            long long newE = 3;
            while(std::gcd(newE, totiente) != 1)
            {
                ++newE;
            }
            return newE;
        }

        long long GeneratePrivateExpo()
        {
            bezout = MyMath::BezoutMethod(e, totiente);

            long long result = (bezout.s + totiente) % totiente;

            return result;
        }

        RSAKey()
        {
            this->p = 0;
            this->q = 0;
            this->n = 0;
            this->totiente = 0;
            this->bezout = MyMath::BezoutMethodResult(0, 0, 0);
            this->e = 0;
            this->d = 0;
        }

        RSAKey(long long p, long long q)
        {
            this->p = p;
            this->q = q;

            n = p*q;
            totiente = (p-1)*(q-1);

            e = GeneratePublicExpo();
            d = GeneratePrivateExpo();
        }
    };

    long long ModExp(long long base, long long expo, long long mod)
    {
        long long result = 1;

        base = base % mod;

        while (expo > 0)
        {
            if (expo%2 == 1)
            {
                result = (result * base) % mod;
            }

            base = (base * base) % mod;

            expo >>= 1;
        }

        return result;
    }

    std::vector<long long> EncryptMessage(std::string message, RSAKey key)
    {
        std::vector<long long> result;

        for(char c : message)
        {
            int letterIndex = c-64;
            long long newC = ModExp(letterIndex, key.e, key.n);
            result.push_back(newC);
        }

        return result;
    }

    std::string DencryptMessage(std::vector<long long> encryptedMessage, RSAKey key)
    {
        std::string result;

        for(long long m : encryptedMessage)
        {
            long long cont = ModExp(m, key.d, key.n);
            
            std::cout << cont << '\n';
            
            char newChar = cont;

            result.push_back(newChar);
        }

        return result;
    }
}
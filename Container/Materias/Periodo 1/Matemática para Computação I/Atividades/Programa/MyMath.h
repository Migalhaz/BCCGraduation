#pragma once
#include <iostream>
#include <vector>
#include <set>

namespace MyMath
{
    bool DivideInteger(int n, int d, int& q, int& r);
    bool DivideInteger(double n, double d, double& q, double& r);
    
    int Divide(int n, int d);
    int Mod(int n, int d);
    
    double Floor(double n);
    double Ceil(double n);

    int Abs(int n);

    int Abs(int n)
    {
        return n >= 0 ? n : -n;
    }

    int Divide(int n, int d)
    {
        int result, mod;
        DivideInteger(n, d, result, mod);
        return result;
    }

    int Mod(int n, int d)
    {
        int result, mod;
        DivideInteger(n, d, result, mod);
        return mod;
    }

    bool CanDivide(double n, double d)
    {
        double q, r;
        return DivideInteger(n, d, q, r);
    }

    bool DivideInteger(int n, int d, int& q, int& r)
    {
        q = 0;
        r = 0;
        if(d == 0)
        {
            throw std::invalid_argument("Nao eh possivel dividir por zero!");
            return false;
        }

        if (n == d)
        {
            q = 1;
            r = 0;
            return true;
        }

        if((n > 0 && d > 0))
        {
            while (((q + 1) * d) <= n)
            {
                ++q;
            }
        }
        else if (n < 0 && d < 0)
        { 
            while ((n - (q * d)) < 0)
            {
                ++q;
            }
        }
        else if (n > 0 && d < 0)
        {
            while(((q - 1) * d) <= n)
            {
                --q;
            }
        }
        else if (n < 0 && d > 0)
        {
            while ((n - (q * d)) < 0)
            {
                --q;
            }
        }
        
        r = n - (q * d);

        return r == 0; 
    }
    
    bool DivideInteger(double n, double d, double& q, double& r)
    {
        q = 0;
        r = 0;
        if(d == 0)
        {
            throw std::invalid_argument("Nao é possivel dividir por zero!");
            return false;
        }

        if (n == d)
        {
            q = 1;
            r = 0;
            return true;
        }

        if((n > 0 && d > 0))
        {
            while (((q + 1) * d) <= n)
            {
                ++q;
            }
        }
        else if (n < 0 && d < 0)
        { 
            while ((n - (q * d)) < 0)
            {
                ++q;
            }
        }
        else if (n > 0 && d < 0)
        {
            while(((q - 1) * d) <= n)
            {
                --q;
            }
        }
        else if (n < 0 && d > 0)
        {
            while ((n - (q * d)) < 0)
            {
                --q;
            }
        }
        
        r = n - (q * d);

        return r == 0;
    }

    double Floor(double n)
    {
        double q;
        double r;
        if (DivideInteger(n, 1, q, r))
        {
            return n;
        }
        n -= r;
        return n;
    }

    double Ceil(double n)
    {
        double r = 0;
        double result;
        double mod;

        if (DivideInteger(n, 1, result, mod))
        {
            return n;
        }

        return n + (1-mod);
    }

    std::set<int> primes;
    std::set<int> notPrimes;
    bool IsPrime(int n)
    {
        if (n < 2)
        {
            return false;
        }

        if (primes.count(n))
        {
            return true;
        }

        if (notPrimes.count(n))
        {
            return false;
        }

        for (int i = n-1; i > 1; --i)
        {
            if(CanDivide(n, i))
            {
                notPrimes.insert(n);
                return false;
            }
        }
        primes.insert(n);
        return true;
    }

    std::vector<int> GetPrimes(int minInclusive, int maxInclusive)
    {
        std::vector<int> result = std::vector<int>();
        if (maxInclusive < 2 || (minInclusive > maxInclusive))
        {
            return result;
        }

        for (int i = minInclusive; i <= maxInclusive; ++i)
        {
            if (IsPrime(i))
            {
                result.push_back(i);
            }
        }
    
        return result;
    }
    
    int MDC(int a, int b)
    {
        if (a == 0)
        {
            return b;
        }
        if (b == 0)
        {
            return a;
        }
        return MDC(b, a%b);
    }

    int MDC_Verbose(int a, int b)
    {
        std::cout << "Fazendo MDC de: " << a << " e " << b << ".\n";
        if (a == 0)
        {
            std::cout << "Como 'a' é 0, o Maior Divisor Comum (MDC) entre qualquer numero e 0, é o proprio numero!";
            return b;
        }
        if (b == 0)
        {
            std::cout << "Como 'b' é 0, o Maior Divisor Comum (MDC) entre qualquer numero e 0, é o proprio numero!";
            return a;
        }

        std::cout << "'a' Passa a ser o resto da divisao de " << a << " por " << b << ".\n";
        int r = a%b;
        std::cout << "O resto da divisao de " << a << " por " << b << " eh: " << (r) << '\n';
        int result = MDC_Verbose(b, r); 
        return result;
    }
}
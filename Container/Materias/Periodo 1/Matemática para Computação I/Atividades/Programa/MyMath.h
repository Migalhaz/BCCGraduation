#pragma once
#include <iostream>
#include <vector>

namespace MyMath
{
    bool DivideInteger(int n, int d, int& q, int& r);
    bool DivideInteger(double n, double d, double& q, double& r);
    int Divide(int n, int d);
    int Mod(int n, int d);
    double Floor(double n);

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
        if(d == 0) return false;
        q = 0;
        r = 0;

        if(n >= 0)
        {
            while (((q + 1) * d) <= n)
            {
                ++q;
            }
        }
        else
        {
            while (((q - 1) * d) >= n)
            {
                --q;
            }
        }

        r = n - (q * d);

        return r == 0;
    }

    bool DivideInteger(double n, double d, double& q, double& r)
    {
        if(d == 0) return false;
        q = 0;
        r = 0;

        if(n >= 0)
        {
            while (((q + 1) * d) <= n)
            {
                ++q;
            }
        }
        else
        {
            while (((q - 1) * d) >= n)
            {
                --q;
            }
        }

        r = n - (q * d);

        return r == 0;
    }

    double Floor(double n)
    {
        double result;
        double mod;

        if (DivideInteger(n, 1, result, mod))
        {
            return n;
        }
        
        if (n > 0)
        {
            return n - mod;
        }
        
        return n - (1 + mod);
    }

    double Ceil(double n)
    {
        double result;
        double mod;

        if (DivideInteger(n, 1, result, mod))
        {
            return n;
        }
        
        if (n > 0)
        {
            return n + 1 - mod;
        }
        
        return n - mod;
    }

    bool IsPrime(int n)
    {
        if (n < 2)
        {
            return false;
        }

        for (int i = n-1; i > 1; --i)
        {
            if(CanDivide(n, i))
            {
                return false;
            }
        }

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
}
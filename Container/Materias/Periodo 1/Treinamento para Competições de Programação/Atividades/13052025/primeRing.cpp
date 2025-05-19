#include <bits/stdc++.h>
using namespace std;

int primes[32] =
{
    0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1
};

int soluction[16] = { 0 };
int usedNumbers[16] = { 0 };

int n;

void GerarCombinacao(int position)
{
    if (position >= n)
    {
        int ringSum = soluction[n-1] + 1;
        if (!primes[ringSum])
        {
            return;
        }

        for (int i = 0; i < n; ++i)
        {
            if (i > 0)
            {
                cout << ' ';
            }
            cout << soluction[i];
        }
        
        cout << '\n';
        return;
    }

    for(int i = 1; i < n; ++i)
    {
        int num = i+1;
        if (usedNumbers[num])
        {
            continue;
        }

        int sum = num + soluction[position - 1];
        if (!primes[sum])
        {
            continue;
        }

        usedNumbers[num] = true;
        soluction[position] = num;
        GerarCombinacao(position + 1);
        usedNumbers[num] = false;
    }
}

int main()
{
    int count = 0;
    while(cin >> n)
    {
        std::cout << "Case " << ++count << ':' << '\n';
        usedNumbers[1] = true;
        soluction[0] = 1;
        GerarCombinacao(1);
    }
}
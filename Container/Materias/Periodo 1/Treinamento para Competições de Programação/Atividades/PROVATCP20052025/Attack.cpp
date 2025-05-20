#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m, n;

    cin >> m >> n;

    long long remainder = m%n;

    long long r = 0;
    if (remainder == 0)
    {
        cout << (m/n) << '\n';
    }
    else{
        r = ((m - remainder)/n + 1);
        cout << r << '\n';
    }
    return 0;
}
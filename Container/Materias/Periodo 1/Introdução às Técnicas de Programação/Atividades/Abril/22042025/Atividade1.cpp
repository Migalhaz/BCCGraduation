#include <iostream>

int main() 
{
    int n;
    std::cin >> n;
    int valores[n];

    for (int i = 0; i < n; i++) {
        std::cin >> valores[i];
    }

    for (int i = 0; i < n/2; i++) 
    {
        if (valores[i] == valores[n-1-i]) 
        {
            continue;
        }
        std::cout << "NO\n";
        return 0;

    }

    std::cout << "YES\n";

    return 0;
}
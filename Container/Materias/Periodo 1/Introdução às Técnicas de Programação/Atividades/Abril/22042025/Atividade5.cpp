#include <iostream>
#include <map>

int main()
{
    int n;
    std::cin >> n;
    std::map<int, int> valores;

    for (int i = 0; i < n; ++i)
    {
        int valor;
        std::cin >> valor;
        valores[valor]++;
    }

    for (int i = 1; i < 11; ++i)
    {
        std::cout << i << " : " << valores[i] << '\n';
    }
 
    return 0;
}
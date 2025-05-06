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
    
    for (auto v : valores)
    {
        if (v.second != 1)
        {
            continue;
        }
        std::cout << v.first << " - ";
    }

    std::cout << '\n';
    return 0;
}
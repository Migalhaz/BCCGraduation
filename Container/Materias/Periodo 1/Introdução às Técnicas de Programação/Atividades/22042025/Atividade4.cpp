#include <iostream>
#include <set>

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::set<int> valores;

    for (int i = 0; i < n; ++i)
    {
        int valor;
        std::cin >> valor;
        valores.insert(valor);
    }

    for (int i = 0; i < m; ++i)
    {
        int valor;
        std::cin >> valor;
        valores.insert(valor);    
    }

    for (int v : valores)
    {
        std::cout << v << " ";
    }
    return 0;
}
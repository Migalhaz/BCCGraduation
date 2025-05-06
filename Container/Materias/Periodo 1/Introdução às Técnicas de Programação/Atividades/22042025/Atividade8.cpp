#include <iostream>
#include <map>
#include <set>

int main()
{
    int n;
    int m;
    std::cin >> n >> m;

    std::map<int, int> valores;
    std::set<int> set;


    for(int i = 0; i < n; ++i)
    {
        int valor;
        std::cin >> valor;
        set.insert(valor);
    }

    for (int v : set)
    {
        valores[v]++;
    }

    set.clear();

    for (int i = 0; i < m; ++i)
    {
        int valor;
        std::cin >> valor;
        set.insert(valor);
    }
    
    for (int v : set)
    {
        valores[v]++;
    }

    for (auto key : valores)
    {
        if (key.second > 1)
        {
            std::cout << key.first << '\n';
        }
    }

    return 0;
}
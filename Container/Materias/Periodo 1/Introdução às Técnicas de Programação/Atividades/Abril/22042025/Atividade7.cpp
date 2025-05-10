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

    std::pair<int, int> par = {-1, -1};
    for (auto key : valores)
    {
        std::cout << key.first << " : " << key.second << '\n';
        if (key.second > par.second)
        {
            par = {key.first, key.second};
        }
    }
    
    std::cout << '\n' <<par.first << " : " << par.second << '\n';
    return 0;
}
#include <iostream>
#include <set>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::set<int> valores;
    for (int i = 0; i < n; ++i)
    {
        int valor;
        std::cin >> valor;
        valores.insert(valor);
    }

    std::vector<int> vetor;
    std::copy(valores.begin(), valores.end(), std::back_inserter(vetor));
    
    int dif;
    for(int i = 0; i < vetor.size() - 1; ++i)
    {
        if (i == 0)
        {
            dif = vetor[i + 1] - vetor[i];
            continue;
        }
        
        int newDif = vetor[i + 1] - vetor[i];
        if (newDif < dif)
        {
            dif = newDif;
        }
    }

    std::cout << dif << '\n';

    return 0;
}
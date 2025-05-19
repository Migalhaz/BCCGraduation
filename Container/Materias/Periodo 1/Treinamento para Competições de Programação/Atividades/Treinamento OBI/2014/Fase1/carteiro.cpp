#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nCasas;
    int mEncomendas;
    cin >> nCasas >> mEncomendas;

    map<int, int> casas;

    for (int i = 0; i < nCasas; ++i)
    {
        int casaNum;
        cin >> casaNum;

        casas[casaNum] = i;
    }

    int posCarteiro = 0;
    int passos = 0;
    for (int i = 0; i < mEncomendas; ++i)
    {
        int enderecoEncomenda;
        cin >> enderecoEncomenda;

        int a = casas[enderecoEncomenda];
        passos += abs(posCarteiro - a);
        posCarteiro = a;
    }

    cout << passos << '\n';

    return 0;
}
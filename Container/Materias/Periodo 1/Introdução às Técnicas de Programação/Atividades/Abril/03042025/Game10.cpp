#include <iostream>

int main()
{
    int linhas;
    int discoPos;
    int aviaoPos;

    std::cin >> linhas >> discoPos >> aviaoPos;

    int moveCount = discoPos + linhas - aviaoPos;
    moveCount = moveCount % linhas;
    std::cout << moveCount;

    return 0;
}
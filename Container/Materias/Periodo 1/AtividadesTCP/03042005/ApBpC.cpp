#include <iostream>
#include <set>
#include <vector>

int main()
{
    int sizeA;
    std::set<int> aSet;
    
    int sizeB;
    std::set<int> bSet;

    int sizeC;
    std::set<int> cSet;

    int sizeX;
    std::vector<int> xVector(sizeX);

    for (int i = 0; i < sizeA; ++i)
    {
        int input;
        std::cin >> input;

        aSet.insert(input);
    }

    for (int i = 0; i < sizeB; ++i)
    {
        int input;
        std::cin >> input;

        bSet.insert(input);
    }

    for (int i = 0; i < sizeC; ++i)
    {
        int input;
        std::cin >> input;

        cSet.insert(input);
    }

    for (int i = 0; i < sizeX; i++)
    {
        int input;
        std::cin >> input;
        xVector[i] = input;
    }

    return 0;
}
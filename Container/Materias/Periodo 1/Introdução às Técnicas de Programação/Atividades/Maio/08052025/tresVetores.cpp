#include <iostream>


int main(){
    int vectorSize;
    std::cin >> vectorSize;

    int vectorCount = 3;
    int vects[vectorCount][vectorSize];

    int result[vectorSize] = {0};
    for (int x = 0; x < vectorCount; ++x)
    {
        for (int y = 0; y < vectorSize; ++y)
        {
            int newNumber;
            std::cin >> newNumber;

            vects[x][y] = newNumber;
        }
    }

    for (int x = 0; x < vectorCount; ++x)
    {
        for (int y = 0; y < vectorSize; ++y)
        {
            result[y] += vects[x][y];
        }
    }

    for (int value : result)
    {
        std::cout << value << ' ';
    }

    std::cout << '\n';
    return 0;
}
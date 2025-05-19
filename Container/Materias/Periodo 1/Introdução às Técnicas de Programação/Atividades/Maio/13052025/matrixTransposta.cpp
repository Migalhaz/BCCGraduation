#include <iostream>

int main()
{
    int row, column;
    std::cin >> row >> column;

    int startMatrix[row][column];
    int finalMatrix[column][row];

    for(int x = 0; x < row; ++x)
    {
        for(int y = 0; y < column; ++y)
        {
            int number;
            std::cin >> number;

            startMatrix[x][y] = number;
            finalMatrix[y][x] = number;
        }
    }

    std::cout << "\nMatrix Original:\n";
    for (int x = 0; x < row; ++x)
    {
        for (int y = 0; y < column; ++y)
        {
            std::cout << startMatrix[x][y] << ' ';
        }
        std::cout << '\n';
    }

    std::cout << "\nMatrix Transposta:\n";
    for (int x = 0; x < column; ++x)
    {
        for (int y = 0; y < row; ++y)
        {
            std::cout << finalMatrix[x][y] << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}
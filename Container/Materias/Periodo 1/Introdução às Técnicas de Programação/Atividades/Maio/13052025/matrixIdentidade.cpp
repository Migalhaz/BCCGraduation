#include <iostream>

int main()
{
    int matrixSize;

    bool identity = true;
    for (int x = 0; x < matrixSize; ++x)
    {
        for (int y = 0; y < matrixSize; ++y)
        {
            int num;
            std::cin >> num;
            if (!identity)
            {
                continue;
            }

            if (y == x)
            {
                if (num != 1)
                {
                    identity = false;
                }
            }
            else
            {
                if (num != 0)
                {
                    identity = false;
                }
            }
        }
    }
    
    return 0;
}
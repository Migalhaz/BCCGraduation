#include <iostream>

void DrawPlusSquare(int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << '*';
        
        char midChar = ' ';

        if (i == 0 || i == size - 1 || i == ((size - 1) /2))
        {
            midChar = '*';
        }

        for (int j = 0; j < size-2; ++j)
        {
            if (j == (size - 3) / 2)
            {
                std::cout << '*';
            }
            else
            {
                std::cout << midChar;
            }
        }

        std::cout << '*' << '\n';
    }
}

void DrawEmptySquare(int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << '*';
        
        char midChar = ' ';

        if (i == 0 || i == size - 1)
        {
            midChar = '*';
        }

        for (int j = 0; j < size-2; ++j)
        {
            std::cout << midChar;
        }

        std::cout << '*' << '\n';
    }
}

void DrawTriangle2(int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (i == size - 1)
        {
            for (int j = 0; j < size; j++)
            {
                std::cout << '*';
            }
        }
        else
        {
            for (int j = 1; j < i + 2; ++j)
            {
                if (j == 1 || j == i + 1)
                {
                    std::cout << '*';
                }
                else
                {
                    std::cout << ' ';
    
                }
            }
        }
        std::cout << '\n';
    }
}

void DrawTriangle1(int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (i == 0 || i == size - 1)
        {
            for (int j = size - i; j > 0; --j)
            {
                std::cout << '*';
            }
        }
        else
        {
            std::cout << '*';
            for (int j = size - i - 2; j > 0; --j)
            {
                std::cout << ' ';
            }
            std::cout << '*';
        }

        std::cout << '\n';
    }
}

int main()
{
    
    int printIndex, size;
    std::cin >> printIndex >> size;
    
    if (printIndex == 0 || printIndex == 1)
    {
        DrawTriangle1(size);
        
        std::cout << '\n';
    }

    if (printIndex == 0 || printIndex == 2)
    {
        DrawTriangle2(size);
      
        std::cout << '\n';
    }
    
    if (printIndex == 0 || printIndex == 3)
    {
        DrawEmptySquare(size);
    
        std::cout << '\n';
    }

    if (printIndex == 0 || printIndex == 4)
    {
        DrawPlusSquare(size);
    }

    return 0;
}
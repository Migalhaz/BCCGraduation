#include <iostream>

int main()
{
    int size;
    std::cin >> size;
    int array[size];
    for (int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
    for (int k = 0; k < size; ++k)
    {
        std::cout << array[k] << ' ';
    }
    std::cout << '\n';

    for (int i = 0; i < size-1; ++i)
    {
        for (int j = 1; j < size; ++j)
        {
            if (array[j-1] > array[j])
            {
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
        for (int k = 0; k < size; ++k)
        {
            std::cout << array[k] << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}
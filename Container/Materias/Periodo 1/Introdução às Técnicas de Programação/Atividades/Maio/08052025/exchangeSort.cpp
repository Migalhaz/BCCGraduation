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

    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = i+1; j < size; ++j)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];

                array[i] = array[j];
                array[j] = temp;

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
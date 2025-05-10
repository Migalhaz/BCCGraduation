#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    for (int i = 1; i < N + 1; ++i)
    {
        int b = i * (i + 1) * (i + 2);
        if (b == N){
            std::cout << "TRIANGULAR";
            return 0;
        }
    }

    std::cout << "NAO TRIANGULAR";

    return 0;
}
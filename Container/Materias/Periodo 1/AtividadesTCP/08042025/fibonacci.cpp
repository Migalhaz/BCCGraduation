#include <iostream>

int Fib(int index)
{
    if (index == 1){
        return 1;
    }
    if (index <= 0){
        return 0;
    }

    return index + Fib(index - 1) + Fib(index - 2);
}

int main()
{
    std::cout << "R: " << Fib(3) << '\n';
    return 0;
}
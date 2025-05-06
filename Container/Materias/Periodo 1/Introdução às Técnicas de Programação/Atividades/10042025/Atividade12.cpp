#include <iostream>

int MDC(int a, int b)
{
    if (b == 0){
        return a;
    }
    return MDC(b, a % b);
}

int main()
{
    int a;
    int b;

    std::cin >> a >> b;

    std::cout << MDC(a, b) << '\n';
    return 0;
}
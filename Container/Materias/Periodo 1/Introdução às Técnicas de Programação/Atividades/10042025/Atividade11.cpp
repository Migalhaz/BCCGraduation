#include <iostream>

int MDC(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return MDC(b, a % b);
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    
    int mdc = MDC(a, b);

    int iA = a / mdc;
    int iB = b / mdc;

    std::cout << iA << " / " << iB << '\n';

    return 0;
}
#include <iostream>

int main()
{
    int a, b, c, d;

    std::cin >> a >> b >> c >> d;

    int resultAB = a + b;
    int resultCD = c - d;

    int result = resultAB * resultCD;
    std::cout << result << '\n';
    std::cout << "Takahashi"; 
    
    return 0;
}
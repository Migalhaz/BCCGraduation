#include <iostream>

void SetInt(int& a){
    std::cin >> a;
}

int main()
{
    int a = 0;
    SetInt(a);

    std::cout << a << '\n';
    return 0;
}
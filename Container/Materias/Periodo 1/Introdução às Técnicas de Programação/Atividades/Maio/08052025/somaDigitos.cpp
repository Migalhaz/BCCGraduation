#include <iostream>
#include <string>
int main()
{
    std::string input;
    std::cin >> input;

    int result = 0;
    for (char c : input)
    {
        result += (c - '0');
    }

    std::cout << result;

    return 0;
}
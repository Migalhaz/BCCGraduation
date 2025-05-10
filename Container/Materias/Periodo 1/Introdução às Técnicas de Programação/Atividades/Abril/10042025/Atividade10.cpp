#include <iostream>

int main()
{
    int input;
    std::cin >> input;
    std::string inputInString = std::to_string(input);
    
    if (inputInString[0] == inputInString[inputInString.length() - 1])
    {
        std::cout << '1';
    }
    else
    {
        std::cout << '0';
    }
    return 0;
}
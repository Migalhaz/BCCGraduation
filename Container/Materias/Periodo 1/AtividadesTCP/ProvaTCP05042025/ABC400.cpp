#include <iostream>

int main()
{
    int input;
    std::cin >> input;

    double rows = 400.0/input;
    int intRows = rows / 1;
    
    if ((rows - intRows) > 0)
    {
        std::cout << "-1";
    }else{
        std::cout << rows;
    }


    return 0;
}
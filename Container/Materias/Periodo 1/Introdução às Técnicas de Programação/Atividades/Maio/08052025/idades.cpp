#include <iostream>

int main()
{
    int peopleCount = 6;
    
    int ofAge = 0;
    for (int i = 0; i < peopleCount; ++i)
    {
        int age;
        std::cin >> age;
        if (age >= 18){
            ++ofAge;
        } 
    }
    std::cout << ofAge << '\n';
    return 0;
}
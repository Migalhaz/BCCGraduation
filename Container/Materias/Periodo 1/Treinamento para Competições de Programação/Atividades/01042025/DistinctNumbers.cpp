#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int count;

    std::cin >> count;

    std::vector<int> numbers(count);
    
    for (int i = 0; i < count; i++)
    {
        int newNumber;
        std::cin >> newNumber;
        numbers.push_back(newNumber);
    }

    std::sort(numbers.begin(), numbers.end());

    int lastNum;
    int difNums = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (i != 0 && lastNum == numbers[i])
        {
            continue;
        }
        ++difNums;
        lastNum = numbers[i];
    }
    std::cout << difNums - 1;
    return 0;
}
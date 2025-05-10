#include <iostream>
#include <set>
#include <string>

int main()
{
    int count;
    std::cin >> count;
    std::set<int> nums;

    for (int i = 0; i < count; ++i)
    {
        int newNum;
        std::cin >> newNum;
        nums.insert(newNum); 
    }

    std::string result = "sim\n";
    for (int i = 1; i < count + 1; ++i)
    {
        if (nums.count(i) == 0)
        {
            result = "não\n";
        }
    }
    std::cout << result;
    return 0;
}
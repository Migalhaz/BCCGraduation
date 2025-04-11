#include <iostream>
#include <set>

int main()
{
    std::set<int> inputs;

    int values = 5;
    for (int i = 0; i < values; ++i)
    {
        int value;
        std::cin >> value;
        inputs.insert(value);
    }



    std::cout << inputs.size();
    return 0;
}
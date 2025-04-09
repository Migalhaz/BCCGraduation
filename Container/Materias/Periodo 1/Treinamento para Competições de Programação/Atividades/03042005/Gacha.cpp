#include <iostream>
#include <set>

int main()
{

    std::set<std::string> set;

    int inputCount;
    std::cin >> inputCount;

    for (int i = 0; i < inputCount; i++)
    {
        std::string input;
        std:: cin >> input;
        set.insert(input);
    }

    int length = set.size();
    std::cout << length;
    return 0;
}
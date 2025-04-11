#include <iostream>
#include <map>

int main()
{
    std::string input;
    std::cin >> input;

    std::map<char, int> lettersFreq;

    for (char l : input)
    {
        if (lettersFreq.count(l) != 0)
        {
            ++lettersFreq[l];
        }
        else{
            lettersFreq[l] = 1;
        }
    }

    std::map<int, int> count;

    for (auto item : lettersFreq)
    {
        if (count.count(item.second) != 0)
        {
            ++count[item.second];
        }else{
            count[item.second] = 1;
        }
    }

    int iterator = 1;

    for (int i = 0; i < count.size(); ++i)
    {
        if (!count.count(iterator))
        {
            std::cout << "No";
            return 0;
        }
        if (count[iterator] != 2){
            std::cout << "No";
            return 0;
        }
        ++iterator;
    }

    std::cout << "Yes";
    return 0;
}
#include <iostream>
#include <vector>

int main()
{

    int input;

    std::cin >> input;
    std::vector<int> numbers;

    for (int i = 0; i < input; i++)
    {
        int newInput;
        std::cin >> newInput;
        numbers.push_back(newInput);
    }

    std::string r;
    for (int a = 0; a < numbers.size(); ++a)
    {
        int interval = numbers[a + 1] - numbers[a];
        r += std::to_string(numbers[a]) + ' ';
        if (a == numbers.size() - 1)
        {
            break;
        }

        if (std::abs(interval) == 1)
        {
            continue;
        }

        if (interval > 0)
        {
            for (int i = 1; i < std::abs(interval); ++i)
            {
                r += std::to_string(numbers[a] + i) + ' ';
            }
        }
        if (interval < 0){
            for (int i = 1; i < std::abs(interval); ++i){
                r += std::to_string(numbers[a] - i) + ' ';
            }
        }
    }

    std::cout << r;

    return 0;
}
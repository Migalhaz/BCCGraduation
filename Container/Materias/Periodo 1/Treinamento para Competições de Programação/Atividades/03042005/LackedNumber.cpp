#include <iostream>
#include <set>

int main(){

    std::string input;
    std::cin >> input;
    std::set<int> result;


    for (char c : input)
    {
        result.insert(c - '0');
    }

    for(int i = 0; i < 10; i++)
    {
        if (result.count(i) <= 0){
            std::cout << i;
            break;
        }
    }

    return 0;
}
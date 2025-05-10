#include <iostream>
#include <string>

int main(){
    int input;
    std::cin >> input;
    std::string result = "Legal";
    
    int lastNumber;
    std::cin >> lastNumber;
    for(int i = 0; i < input-1; i++)
    {
        int newNumber;
        std::cin >> newNumber;
        if (result != "Legal")
        {
            continue;
        }
        int dif = newNumber - lastNumber;
        if ((dif % 2) != 0)
        {
            result = "Chato";
        }
        lastNumber = newNumber;
    }
    std::cout << result << '\n';
    return 0;
}
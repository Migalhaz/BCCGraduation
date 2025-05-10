#include <iostream>

int main()
{
    int lotesCount;
    std::cin >> lotesCount;
    int lotes[lotesCount] = {0};

    int availableLotes = 0;
    bool passMyLote = false;
    for (int i = 0; i < lotesCount; ++i)
    {
        int loteState;
        std::cin >> loteState;

        if (loteState == 2)
        {
            passMyLote = true;
            continue;
        }

        if (passMyLote)
        {
            if (loteState == 1)
            {
                break;
            }
            ++availableLotes;
        }
        else
        {
            if (loteState == 0)
            {
                ++availableLotes;
            }
            else if (loteState == 1)
            {
                availableLotes = 0;
            }
        }
    }
    std::cout << availableLotes << '\n';
    return 0;
}
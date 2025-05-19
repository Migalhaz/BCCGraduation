#include <bits/stdc++.h>

int main()
{
    int cardCount = 5;
    int cards[cardCount];
    std::vector<int> sortedCards = std::vector<int>(cardCount);
    for (int i = 0; i < cardCount; ++i)
    {
        std::cin >> cards[i];
        sortedCards[i] = cards[i];
    }

    std::sort(sortedCards.begin(), sortedCards.end());

    bool sorted = true;
    for (int i = 0; i < cardCount; ++i)
    {
        if(cards[i] == sortedCards[i])
        {
            continue;
        }
        if (cards[i] == sortedCards[cardCount - i - 1])
        {
            continue;
        }
        sorted = false;
        break;
    }

    if (!sorted)
    {
        std::cout << "N\n";
        return 0;
    }
    if (cards[0] < cards[1])
    {
        std::cout << "C\n";
        return 0;
    }
    std::cout << "D\n";
    return 0;
}
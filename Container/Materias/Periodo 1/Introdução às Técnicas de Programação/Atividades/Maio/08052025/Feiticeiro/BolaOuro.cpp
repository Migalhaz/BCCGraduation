#include <iostream>
#include <cmath>
#include <vector>

class Bet
{
    public:
        int friendIndex;
        double bet;
        int playerIndex;
        double betPercentage;
};

void ShowWinner(Bet bet, double totalBet)
{
    std::cout << "Apostador " << (bet.friendIndex + 1) << ": R$ ";
    double result = (bet.bet * 100) / totalBet;
    std::cout << result << '\n';

}

int main()
{
    int friendsCount;
    std::cin >> friendsCount;

    Bet friends[friendsCount];

    int winnerIndex;
    double totalBet = 0;
    for (int i = 0; i < friendsCount; ++i)
    {
        double bet;
        int playerIndex;
        std::cin >> bet >> playerIndex;
        totalBet += bet;
        Bet newBet = Bet();
        newBet.friendIndex = i;
        newBet.bet = bet;
        newBet.playerIndex = playerIndex;

        friends[i] = newBet;
    }
    
    

    std::cin >> winnerIndex;

    
    std::vector<Bet> friendsWinners = std::vector<Bet>();
    for (Bet b : friends)
    {
        std::cout << b.friendIndex << " apostou em -> " << b.playerIndex << '\n';
        if (b.playerIndex == winnerIndex)
        {
            std::cout << "Adding winner: " << b.friendIndex << '\n';
            friendsWinners.push_back(b);
        }
    }

    double food = round(totalBet * 0.1);
    std::cout << "Total: R$ " << totalBet << '\n';
    totalBet -= food;
    if(friendsWinners.size() > 0)
    {
        for (Bet b : friendsWinners)
        {
            ShowWinner(b, totalBet);
        }
    }
    else
    {

    }

    std::cout << "Bebidas e petiscos: R$ " << food << '\n';
    return 0;
}
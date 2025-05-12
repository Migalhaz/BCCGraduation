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

void ShowWinner(Bet bet, double percentage)
{
    std::cout << "Apostador " << (bet.friendIndex + 1) << ": R$ ";
    double result = round(bet.bet * percentage);
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
    

    std::cout << "Total: R$ " << totalBet << '\n';
    double food = round(totalBet * 0.1);
    totalBet -= food;
    
    std::vector<Bet> friendsWinners = std::vector<Bet>();
    double totalWin = 0;
    for (Bet b : friends)
    {
        if (b.playerIndex == winnerIndex)
        {
            totalWin += b.bet;
            friendsWinners.push_back(b);
        }
    }

    if(friendsWinners.size() <= 0)
    {
        for (Bet b : friends)
        {
            totalWin += b.bet;
            friendsWinners.push_back(b);
        }
    }
    
    double percentage = totalBet/totalWin;
    for (Bet b : friendsWinners)
    {
        ShowWinner(b, percentage);
    }

    std::cout << "Bebidas e petiscos: R$ " << food << '\n';
    return 0;
}
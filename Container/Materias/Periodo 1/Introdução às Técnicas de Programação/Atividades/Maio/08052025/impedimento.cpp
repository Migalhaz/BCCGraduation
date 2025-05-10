#include <iostream>
#include <string>

int main()
{
    int teamPlayerCount = 10;

    int playersA[teamPlayerCount];
    int playersB[teamPlayerCount];

    double playersAPosition[teamPlayerCount];
    double minPositionA = 9999;

    double playersBPosition[teamPlayerCount];
    double maxPositionB = -9999;

    int playersImpedidosA[teamPlayerCount] = { 0 };
    int playersImpedidosB[teamPlayerCount] = { 0 };

    for (int a = 0; a < teamPlayerCount; ++a)
    {
        std::cin >> playersA[a];
    }

    for (int b = 0; b < teamPlayerCount; ++b)
    {
        std::cin >> playersB[b];
    }

    for (int a = 0; a < teamPlayerCount; ++a)
    {
        double position;
        std::cin >> position;
        playersAPosition[a] = position;
        if (position < minPositionA)
        {
            minPositionA = position;
        }
    }

    for (int b = 0; b < teamPlayerCount; ++b)
    {
        double position;
        std::cin >> position;
        playersBPosition[b] = position;
        if (position > maxPositionB)
        {
            maxPositionB = position;
        }
    }

    for (int a = 0; a < teamPlayerCount; ++a)
    {
        double playerPosition = playersAPosition[a];
        if (playerPosition < 0)
        {
            continue;
        }
        if (playerPosition > maxPositionB)
        {
            playersImpedidosA[a] = playersA[a];
        }
    }

    for (int b = 0; b < teamPlayerCount; ++b)
    {
        double playerPosition = playersBPosition[b];
        if (playerPosition > 0)
        {
            continue;
        }
        if (playersBPosition[b] < minPositionA)
        {
            playersImpedidosB[b] = playersB[b];
        }
    }

    std::cout << "A:";
    int aImpedidosCount = 0;
    for (int a = 0; a < teamPlayerCount; ++a)
    {
        if (playersImpedidosA[a] == 0)
        {
            continue;
        }
        ++aImpedidosCount;
        std::cout << ' ' << playersImpedidosA[a] ;
    }
    if (aImpedidosCount == 0)
    {
        std::cout << " sem impedimentos";
    }
    std::cout << '\n';

    std::cout << "B:";
    int bImpedidosCount = 0;
    for (int b = 0; b < teamPlayerCount; ++b)
    {
        if (playersImpedidosB[b] == 0)
        {
            continue;
        }
        ++bImpedidosCount;
        std::cout << ' ' << playersImpedidosB[b] ;
    }
    if (bImpedidosCount == 0)
    {
        std::cout << " sem impedimentos";
    }
    std::cout << '\n';

    return 0;
}
#include <iostream>

int main() 
{
    int n, m;

    std::cin >> n >> m;

    int minorM;
    int nVal[n];

    for (int i = 0; i < n; i++) {
        std::cin >> nVal[i];
    }

    for (int i = 0; i < m; i++) {
        
        int value;
        std::cin >> value;
        if (i == 0)
        {
            minorM = value;
            continue;
        }

        if (value < minorM)
        {
            minorM = value;
        }
    }
    for (int i : nVal)
    {
        if (i < minorM)
        {
            std::cout << i << '\n';
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<int> heights;
vector<int> results = vector(100000, -1);

int BestStone(int n)
{
    if (results[n] != -1)
    {
        return results[n];
    }
    if (n < 1)
    {
        return 0;
    }
    if (n == 1)
    {
        results[n] = abs(heights[n] - heights[n-1]);
        return results[n];
    }

    
    int p1 = BestStone(n-1) + abs(heights[n-1] - heights[n]);
    int p2 = BestStone(n-2) + abs(heights[n-2] - heights[n]);

    results[n] = min(p1, p2);
    return results[n];
}

int main()
{
    int count;
    cin >> count;
    heights = vector(count, -1);
    for (int i = 0; i < count; ++i)
    {
        cin >> heights[i];
    }

    cout << BestStone(count - 1) << '\n';
    return 0;
}
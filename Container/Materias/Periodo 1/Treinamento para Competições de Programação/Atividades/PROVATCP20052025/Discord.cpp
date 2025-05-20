#include <bits/stdc++.h>
using namespace std;



int main()
{
    set<pair<int, int>> r;
    

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m-1; j += 2)
        {
            pair<int, int> p = pair<int, int>();
            cin >> p.first >> p.second;
            r.insert(p);
        }
    }

    for ()
    {
        
    }


    return 0;
}
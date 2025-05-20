#include <bits/stdc++.h>
using namespace std;


vector<int> targets = vector<int>();
vector<map<int, int>> availables = vector<map<int, int>>();

set<vector<int>> results = set<vector<int>>();

void Generate(int index, int currentSum, vector<int> currentResult)
{
    if (currentSum == targets[index])
    {
        sort(currentResult.begin(), currentResult.end());
        if (results.count(currentResult) > 0)
        {
            return;
        }
        results.insert(currentResult);
        return;
    }

    for (auto v : availables[index])
    {
        if (v.second <= 0) continue;
        if ((currentSum + v.first) > targets[index])
        {
            continue;
        }
        --availables[index][v.first];
        currentResult.push_back(v.first);

        Generate(index, currentSum + v.first, currentResult);
        ++availables[index][v.first];
    }
}

int main()
{
    int count = 0;
    while (true)
    {
        int numCount;
        int target;

        cin >> target >> numCount; 

        if (target != 0 && numCount != 0)
        {
            targets[count] = target;
            
            map<int, int> newA = map<int, int>();
            for (int i = 0; i < numCount; ++i)
            {
                int index;
                cin >> index;
                ++newA[index];
            }
            availables[count] = newA;
            ++count;
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < count + 1; ++i)
    {
        results.clear();
        vector<int> r;
        Generate(i, 0, r);

        cout << "Sums of " << targets[i] << ":\n";
        if (results.size() <= 0)
        {
            cout << "NONE\n";
            continue;
        }
        for (vector<int> re : results)
        {
            for (int i = 0; i < re.size(); ++i)
            {
                if (i != 0)
                {
                    cout << '+';
                }
                cout << re[i];
            }
            cout << '\n';
        }
    }
    return 0;
}
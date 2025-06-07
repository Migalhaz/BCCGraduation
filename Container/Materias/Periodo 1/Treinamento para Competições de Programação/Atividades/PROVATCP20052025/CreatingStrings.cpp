#include <bits/stdc++.h>
using namespace std;

map<char, int> chars;
map<char, int> usedChars;
int charCount;
vector<string> results;

void Generate(string r)
{
    if (r.length() >= charCount)
    {
        results.push_back(r);
        return;
    }

    for (auto c : chars)
    {
        if (usedChars[c.first] >= c.second)
        {
            continue;
        }
        ++usedChars[c.first];
        string newString = r + c.first;
        Generate(newString);
        --usedChars[c.first];
    }
}

int main()
{
    string s;
    cin >> s;
    charCount = 0;
    
    for (char c : s)
    {
        ++charCount;
        chars[c] = 0;
        usedChars[c] = 0;
    }

    for(char c : s)
    {
        ++chars[c];
    }

    Generate("");

    cout << results.size() << '\n';
    for (string r : results)
    {
        cout << r << '\n';
    }
    return 0;
}
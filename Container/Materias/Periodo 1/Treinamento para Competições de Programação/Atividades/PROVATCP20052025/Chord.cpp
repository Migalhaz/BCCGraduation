#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> result;
    result.insert("ACE");
    result.insert("BDF");
    result.insert("CEG");
    result.insert("DFA");
    result.insert("EGB");
    result.insert("FAC");
    result.insert("GBD");

    string input;
    cin >> input;
    if (result.count(input) > 0)
    {
        cout << "Yes\n";
        return 0;
    }
    cout << "No\n";
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

string Convert(int r, int g, int b)
{
    string a1 = to_string(r/(int) 16);
    int pt2r = r%(int) 16;
    string a2 = (pt2r < 10) ? to_string(pt2r) : to_string('A' - 10 + pt2r);

    string a3 = to_string(g/(int) 16);
    int pt2g = g%(int) 16;
    string a4 = (pt2g < 10) ? to_string(pt2g) : to_string('A' - 10 + pt2g);

    string a5 = to_string(b/(int) 16);
    int pt2b = b%(int) 16;
    string a6 = (pt2b < 10) ? to_string(pt2b) : to_string('A' - 10 + pt2b);

    return '#' + a1 + a2 + a3 + a4 + a5 + a6;
}

int main()
{
    int r, g, b;
    cin >> r >> g >> b;
    cout << Convert(r, g, b) << '\n';
    return 0;
}

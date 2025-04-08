#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long number;
    long expo;

    cin >> number;
    cin >> expo;

    long x = 0;
    int limit = pow(10, 9);

    for (int i = 0; i < expo + 1; i++)
    {
        x += pow(number, i);
        if (x > limit)
        {
            cout << "inf";
            return 0;
        }
    }

    cout << x;

    return 0;
}
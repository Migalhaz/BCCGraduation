#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{

    long input;

    cin >> input;

    long count = 0;
    vector<long> aResults;
    vector<long> bResults;

    for (long a = 1; a < input + 1; a++)
    {
        long aPow = pow(2, a);
        if (aPow > input){
            break;
        }
        aResults.push_back(aPow);
    }

    for (long b = 1; b < input + 1; b++)
    {
        long bPow = pow(b, 2);
        if (bPow > input)
        {
            break;
        }
        bResults.push_back(bPow);
    }

    for (long i = 1; i < input; i++)
    {
        bool breakable = false;
        for (long a : aResults)
        {
            for (long b : bResults){

                long expect = b * a;

                if (expect == i){
                    ++count;
                    breakable = true;
                    break;
                }
            }
            if (breakable){
                break;
            }

        }

    }

    cout << count;
    return 0;
}
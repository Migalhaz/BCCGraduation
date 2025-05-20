#include <bits/stdc++.h>
using namespace std; 

int main()
{
    int people;
    int food;
    cin >> people >> food;

    map<int, int> foodLike;
    for (int i = 0; i < food; ++i)
    {
        foodLike[i + 1] = 0;
    }

    for (int i = 0; i < people; ++i)
    {
        int likedFoodCount;
        cin >> likedFoodCount;
        for (int i = 0; i < likedFoodCount; ++i)
        {
            int foodIndex;
            cin >> foodIndex;
            foodLike[foodIndex]++;
        }
    }

    int count = 0;
    for (auto f : foodLike)
    {
        if (f.second == people)
        {
            ++count;
        }
    }
    cout << count << '\n';
    return 0;
}
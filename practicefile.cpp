#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

int main()
{
    int scores[5], sum = 0;
    {
        cout << "enter marks for 5 subs :";

        for (int i = 0; i < 5; i++)
        {
            cin >> scores[i];
        }
    }

    int calculateTotalScore()
    {
        for (int i = 0; i < 5; i++)
        {
            sum = sum + scores[i];
        }
        cout << sum;
    }
}

#include <bits/stdc++.h>
#include <iostream>
#define PB(a) push_back(a)
using namespace std;

typedef vector<int> vt;

int main()
{

    int t;
    cin >> t;

    int result = 0;
    while (t--)
    {
        vt arr;
        for (int i = 0; i < 3; i++)
        {
            int val;
            cin >> val;
            arr.PB(val);
        }

        int count = 0;
        for (int i : arr)
        {
            if (i == 1)
                count++;
        }

        if (count >= 2)
        {
            result++;
        }
    }
    cout << result;

    return 0;
}
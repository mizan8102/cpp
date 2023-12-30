#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int result = 0;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int count = (a == 1) + (b == 1) + (c == 1);
        if (count >= 2)
            result++;
    }
    cout << result;
    return 0;
}
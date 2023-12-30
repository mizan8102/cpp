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
        result += (a + b + c >= 2);
    }
    cout << result;
    return 0;
}
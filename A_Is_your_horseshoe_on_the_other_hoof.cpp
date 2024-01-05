#include <bits/stdc++.h>
#include <iostream>

using namespace std;
typedef vector<int> vi;
typedef long long ll;
const ll MAX_SIZE = 1e+5;

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    int count = 0, countB = 0, countC = 0;

    
    if (a == b)
    {
        count++;
    }
    if (a == c)
    {
        count++;
    }
    if (a == d)
    {
        count++;
    }

    if (b == c)
    {
        countB++;
    }
    if (b == d)
    {
        countB++;
    }

    if (c == d)
    {
        countC++;
    }

    cout << count << countB << countC;

    return 0;
}

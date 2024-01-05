#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// time complexity o(n)
int main()
{
    int n = 8;
    int arr[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best = 0, sum = 0;
    for (int a = 0; a < n; a++)
    {
        sum = max(arr[a], sum + arr[a]);
        best = max(best, sum);
    }
    cout << best << endl;
    return 0;
}

#include <iostream>
#include <climits>
using namespace std;

// time complexity o(n^2)
int main()
{
    int n = 8;
    int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best = 0;
    for (int a = 0; a < n; a++)
    {
        int sum = 0;
        for (int b = a; b < n; b++)
        {
            sum += array[b];
            best = max(best, sum);
        }
    }
    cout << best << endl;
    return 0;
}

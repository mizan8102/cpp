#include <iostream>
#include <climits>
using namespace std;

// time complexity o(n^3)
int main()
{
    int n = 8;
    int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best=0;
    for (int a = 0; a < n; a++)
    {
        for (int b = a; b < n; b++)
        {
            int sum=0;
            for (int k = a; k <=b ; k++)
            {
                sum +=array[k];
            }
            best = max(best,sum);
        }
    }
    cout << best << endl;
    return 0;
}

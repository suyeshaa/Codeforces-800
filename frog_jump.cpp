#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, k, pos = 0;
        cin >> a >> b >> k;
        if (k % 2 == 0)
        {
            pos = (a - b) * (k / 2);
        }
        else
        {
            pos = ((a - b) * (k / 2)) + a;
        }
        cout << pos << endl;

        // long long int a, b, k, pos = 0;
        // cin >> a >> b >> k;
        // for (int i = 1; i <= k; i++)
        // {
        //     if (i % 2 == 0)
        //     {
        //         pos -= b;
        //     }
        //     else
        //     {
        //         pos += a;
        //     }
        // }
        // cout << pos << endl;
    }
}
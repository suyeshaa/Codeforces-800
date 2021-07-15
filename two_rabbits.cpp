#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t, count = 0;
    cin >> t;
    while (t--)
    {
        long long int a, b, x, y, div = 0;
        cin >> x >> y >> a >> b;

        if ((y - x) % (a + b) == 0)
        {
            cout << ((y - x) / (a + b)) << endl;
        }
        else
        {
            cout << -1 << endl;
        }

        //     int count = 0;
        //     bool flag = false;
        //     long long int x, y, a, b;
        //     cin >> x >> y >> a >> b;
        //     while (x <= y)
        //     {
        //         x += a;
        //         y -= b;
        //         count++;
        //         // cout << x << " " << y << endl;
        //         // cout << count;
        //         if (x == y)
        //         {
        //             flag = true;
        //             break;
        //         }
        //     }
        //     if (flag == true)
        //     {
        //         cout << count << endl;
        //     }
        //     else
        //     {
        //         cout << -1 << endl;
        //     }
    }
}
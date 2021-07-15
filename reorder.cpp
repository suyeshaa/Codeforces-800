#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        float sum = 0, sum_act = 0;
        cin >> n >> m;
        float a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= n; i++)
        {
            sum = 0;
            for (int j = i; j <= n; j++)
            {
                sum += a[j - 1] / j;
                // cout << sum << endl;
            }

            sum_act += sum;
            // cout << sum_act << endl;
        }

        if (sum_act == m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
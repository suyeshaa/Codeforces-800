#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, count = 0;
        cin >> n >> m;
        int a[n], b[m];
        // int maxim = max(n, m);
        // int hash[maxim] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // cout << a[i] - 1 << endl;
            // hash[a[i] - 1]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            // cout << b[i] << endl;
            // hash[b[i] - 1]++;
            // cout << hash[b[i] - 1] << endl;
        }
        // for (int i = 0; i < maxim; i++)
        // {
        //     cout << hash[i] << " " << endl;
        // }
        // for (int i = 0; i < maxim; i++)
        // {
        //     if (hash[i] == 2)
        //     {
        //         count++;
        //     }
        // }
        // cout << count;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i] == b[j])
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }
}
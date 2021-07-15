#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int j = 0;
        int k = n - 1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                b[j] = a[i];
                j++;
            }
            if (a[i] % 2 == 0)
            {
                b[k] = a[i];
                k--;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, d = 0;
        cin >> n;
        int a[n], hash[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            hash[a[i] - 1]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (hash[i] == 1)
            {
                d = i + 1;
                break;
            }
        }
        int *p = &a[0];

        auto it = find(a, a + n, d);

        int index = it - p;

        if (index == n)
        {
            cout << -1 << endl;
        }
        else
        {

            cout << index + 1 << endl;
        }
    }
}

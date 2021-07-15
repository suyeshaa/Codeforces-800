#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mini = 101, count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            mini = min(mini, a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] > mini)
            {
                count++;
            }
        }

        cout << count << endl;
    }
}
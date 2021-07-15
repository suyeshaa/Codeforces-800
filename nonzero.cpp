#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num = 0, out = 0;
        int n, sum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] == 0)
            {
                num++;
            }
        }

        // cout << sum << " " << num;

        if (sum == 0 and num == 0)
        {
            cout << 1 << endl;
        }
        else if (num > 0)
        {
            out = num;
            if (sum + num == 0)
            {
                out += 1;
            }
            cout << out << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
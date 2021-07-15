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
        int a[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + 2 * n);

        for (int i = 0; i < n; i++)
        {
            if ((i + 1) % 2 == 0)
            {
                swap(a[i], a[2 * n - 1 - i]);
            }
        }

        for (int i = 0; i < 2 * n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
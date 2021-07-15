#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        set<int> bases;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                // cout << a[j] - a[i] << endl;
                bases.insert(a[j] - a[i]);
            }
        }

        cout << bases.size() << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] > 1)
        {
            count = count + a[i + 1] - a[i] - 1;
        }
    }

    cout << count << endl;
}
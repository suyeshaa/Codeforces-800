#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < n; i = i + 2)
    {
        if (a[i] != a[i + 1])
        {
            sum += abs(a[i] - a[i + 1]);
        }
    }

    cout << sum;
}
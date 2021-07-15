#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 1;
    cin >> n;
    long long int a[n];
    long long int c;
    cin >> c;
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] <= c)
        {
            count++;
            // cout << a[i + 1] << " " << a[i] << " " << count << endl;
        }
        else
        {
            count = 1;
        }
    }

    cout << count << endl;
}
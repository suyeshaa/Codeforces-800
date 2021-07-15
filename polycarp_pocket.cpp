#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, maxm = 0;
    cin >> n;
    long long int a[n], hash[101] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hash[a[i] - 1]++;
    }

    for (int i = 0; i < 101; i++)
    {
        maxm = max(maxm, hash[i]);
    }
    cout << maxm;
}
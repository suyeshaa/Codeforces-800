#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        long long int n;
        cin >> n;
        long long int a[n], hash[n] = {0}, b[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            hash[a[i] - 1]++;
        }

        int j = 0;

        for (int i = 0; i < n; i++)
        {
            if (hash[i] >= 2)
            {
                // cout << i << " ";
                b[j] = i + 1;
                j++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }

        for (int i = 0; i < n; i++)
        {
            if (b[i] + 1 != b[i + 1])
            {
                count++;
            }
        }

        cout << count << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, count = 0;
        cin >> n;
        for (int i = 1; i <= 9; i++)
        {
            long long int a = i;
            while (a <= n)
            {
                a = a * 10 + i;
                count++;
            }
        }

        cout << count << endl;
    }
}
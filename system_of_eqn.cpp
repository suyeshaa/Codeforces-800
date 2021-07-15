#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= 1000; j++)
        {
            if (pow(i, 2) + j == n and i + pow(j, 2) == m)
            {
                count++;
            }
        }
    }

    cout << count;
}
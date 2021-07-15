#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = false;
        int n;
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
                // cout << a[i] << " " << a[j] << endl;
                // cout << a[i] - a[j] << endl;
                if (abs(a[i] - a[j]) == 1)
                {

                    flag = true;
                    break;
                }
            }
            if (flag == true)
            {
                break;
            }
        }

        if (flag == true)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}
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
        int s[4] = {0};
        int m = 0;
        vector<pair<int, int>> pair_1;

        while (m < n)
        {

            int k = 0;
            string str;
            cin >> str;
            for (int i = 0; i < n; i++)
            {
                if (str.at(i) == '*')
                {
                    // cout << i << " " << m << endl;
                    s[k] = n;
                    s[k + 1] = i;
                    k = k + 2;
                }
            }
            m++;
        }

        for (int i = 0; i < 4; i++)
        {
            cout << s[i] << " ";
        }

        while (n--)
        {
            for (int i = 0; i < n; i++)
            {
                if ((n == s[0] and i == s[3]) or (n == s[2] and i == s[1]))
                {
                    cout << '*';
                }
                else
                {
                    cout << '.';
                }
            }
            cout << endl;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cin >> a[i][j];
        //     }
        // }
        // int k = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (a[i][j] == '*')
        //         {
        //             s[k] = i;
        //             s[k + 1] = j;
        //             k = k + 2;
        //         }
        //     }
        // }
        // for (int i = 0; i < 4; i++)
        // {
        //     cout << s[i];
        // }
    }
}
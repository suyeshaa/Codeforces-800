#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, count = 0;
        string s;
        cin >> n >> m;
        while (n--)
        {
            cin >> s;
            if (n == 0)
            {
                for (int i = 0; i < m - 1; i++)
                {
                    if (s.at(i) != 'R')
                    {
                        // cout << s.at(i) << " ";
                        count++;
                    }
                }
            }
            else
            {
                if (s.at(m - 1) != 'D')
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }
}
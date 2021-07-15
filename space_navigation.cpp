#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, r = 0, l = 0, u = 0, d = 0;
        bool flag = false;
        bool flag2 = false;
        cin >> x >> y;
        string s;
        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == 'R')
            {
                r++;
            }
            if (s.at(i) == 'L')
            {
                l++;
            }
            if (s.at(i) == 'U')
            {
                u++;
            }
            if (s.at(i) == 'D')
            {
                d++;
            }
        }
        // cout << r << " " << l << " " << u << " " << d << " " << endl;

        if (x > 0)
        {
            if (r >= x)
            {
                flag = true;
            }
        }
        else
        {
            if (l >= abs(x))
            {
                flag = true;
            }
        }

        if (y > 0)
        {
            if (u >= y)
            {
                flag2 = true;
            }
        }
        else
        {
            if (d >= abs(y))
            {
                flag2 = true;
            }
        }

        if (flag == true and flag2 == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
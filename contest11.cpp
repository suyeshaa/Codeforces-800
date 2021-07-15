#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = false;
        string x;
        cin >> x;
        int len = x.length();

        if (len < 2)
        {
            cout << "NO" << endl;
        }

        else if (len == 2)
        {
            if (x.at(0) == x.at(1))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (len > 2)
        {
            for (int i = 0; i < len - 1; i++)
            {
                if (x.at(i) <= x.at(i + 1))
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                }
            }

            if (flag == true)
            {
                if (x.at(len - 2) == x.at(len - 1))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
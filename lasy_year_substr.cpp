// 20192020

// 2019
// 201 0
// 20 20
// 2 020
//  2020

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
        bool flag = false;
        string s;
        string str;
        cin >> s;
        int len = s.length();
        for (int i = 0; i <= 4; i++)
        {
            // cout << i << " " << 4 - i << endl;
            str = s.substr(0, i) + s.substr(len - 4 + i, 4 - i);
            if (str == "2020")
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

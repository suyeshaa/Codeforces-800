#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    // bool flag = false;
    cin >> t;
    while (t--)
    {
        bool flag = false;
        int essence, water = 0, e = 0, w = 0, count = 1;
        cin >> essence;
        water = 100 - essence;
        if (water == 0)
        {
            cout << 1 << endl;
        }
        else
        {

            for (int i = 1; i <= 100; i++)
            {
                for (int j = 1; j <= 100; j++)
                {
                    if (water * i == essence * j)
                    {
                        cout << i + j;
                        cout << endl;
                        flag = true;
                        break;
                    }
                }

                if (flag == true)
                {
                    break;
                }
            }
        }
    }
}
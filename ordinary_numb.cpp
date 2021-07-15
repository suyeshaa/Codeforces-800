#include <bits/stdc++.h>
using namespace std;
void digit(int num, int *pos, int *digi)
{
    int dig = 0;
    while (num >= 10)
    {
        num = num / 10;
        dig++;
    }
    *pos = num;
    *digi = dig;
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, a = 0, b = 0;
        cin >> n;
        int pos, digi;

        if (n < 10)
        {
            cout << n << endl;
        }
        else
        {
            a = n / 10;
            digit(n, &pos, &digi);
            // cout << pos << " " << digi << " ";2

            b = pos;
            // cout << b << endl;

            while (digi--)
            {
                b = b * 10 + pos;
                // cout << a << " ";
            }
            cout << b << " " << a << endl;

            if (n >= b)
            {
                cout << (9 + a) << endl;
            }
            else
            {

                cout << (8 + a) << endl;
            }
        }
    }
}
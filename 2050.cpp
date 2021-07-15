#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll cnt = 0;
ll digits(ll num)
{
    ll dig = 0;
    while (num > 0)
    {
        num = num / 10;
        dig++;
    }
    return dig;
}

void func(ll num)
{

    ll dig = digits(num) - 4;
    ll new_num = 2050;
    while (dig > 0)
    {
        new_num *= 10;
        dig--;
    }

    while (num > 0)
    {
        // ll new_num = 2050 * pow(10, dig);
        if (num >= new_num)
        {
            num = num - new_num;
            cnt++;
        }
        else
        {
            new_num /= 10;
        }

        // cout << num << " " << new_num << endl;
    }

    // if (num == 0)
    // {
    //     cnt++;
    // }
    // else if (num == 2050)
    // {
    //     cnt += 2;
    // }
    // else
    // {
    //     cnt++;
    //     return func(num);
    // }

    // return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int dig = 0;
        if (n % 2050 == 0)
        {
            func(n);
            cout << cnt << endl;
            cnt = 0;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
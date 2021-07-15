#include <bits/stdc++.h>
using namespace std;

int isprime(int num)
{
    bool flag = true;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = false;
        }
    }
    return flag;
}

void func(int numb)
{
    if (isprime(numb) == true)
    {
        if (numb == 2 or numb == 3)
        {
            cout << numb << endl;
        }
        else
        {
            numb = numb - 1;
            for (int i = numb - 1; i > 0; i--)
            {
                if (numb % i == 0)
                {
                    numb = numb / i;
                    cout << numb + 1 << endl;
                    break;
                }
            }
        }
    }
    else
    {
        for (int i = numb - 1; i > 0; i--)
        {
            if (numb % i == 0)
            {
                numb = numb / i;
                if (isprime(numb) == true)
                {
                    func(numb);
                    break;
                }
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (n == 2 || n == 3)
        {
            cout << n - 1 << endl;
        }

        else
        {
            func(n);
        }
    }
}
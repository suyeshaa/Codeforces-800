#include <bits/stdc++.h>
using namespace std;

bool diff(int num)
{
    int hash[10] = {0};
    int end = 0;
    while (num > 0)
    {
        end = num % 10;
        num = num / 10;
        hash[end]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (hash[i] > 1)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    bool flag = false;
    long long int l, r, res = 0;
    cin >> l >> r;

    res = l;
    int outp = 0;

    while (res <= r)
    {
        flag = false;
        if (diff(res) == false)
        {
            outp = res;
            flag = true;
            break;
        }

        res++;
    }
    (flag) ? cout << outp : cout << -1;
}

for (int i = 0; i < n; i++)
{
    cin >> temp;
    a[i % 3] += temp;
}

#include <bits/stdc++.h>
using namespace std;

int sum(int num)
{
    int sum = 0, s = 0;
    while (num > 0)
    {
        s = num % 10;
        num = num / 10;
        sum += s;
    }
    return sum;
}

int main()
{
    int a, summ = 0, b = 0;
    cin >> a;

    for (int i = 0; i < 100; i++)
    {
        b = a + i;
        if (sum(b) % 4 == 0)
        {
            cout << b;
            break;
        }
    }
}
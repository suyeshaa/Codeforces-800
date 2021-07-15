#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, x, y, z;
    cin >> a >> b >> c;
    cin >> x >> y >> z;
    int n;
    cin >> n;

    int cups = 0, medals = 0, shelves = 0;

    cups = a + b + c;
    medals = x + y + z;

    if (cups % 5 == 0)
    {
        shelves += cups / 5;
    }
    else
    {
        shelves += cups / 5 + 1;
    }

    if (medals % 10 == 0)
    {
        shelves += medals / 10;
    }
    else
    {
        shelves += medals / 10 + 1;
    }

    // cout << shelves;
    if (shelves <= n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
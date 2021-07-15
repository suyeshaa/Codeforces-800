#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, p, q;
        cin >> l >> r >> p >> q;
        if (l != q)
        {
            cout << l << endl;
            cout << q << endl;
        }
        else
        {
            cout << r << endl;
            cout << p << endl;
        }
    }
}

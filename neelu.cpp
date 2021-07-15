#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1-100
    int n;
    cin >> n;
    for (int i = 1; i <= 9; i++)
    {
        int curr = i;
        while (curr <= n)
        {
            cout << curr << endl;
            curr = curr * 10 + i;
        }
    }

    cout << ('5' - '0') * 345 << endl;

    return 0;
}
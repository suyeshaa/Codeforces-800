#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, chest = 0, bicep = 0, back = 0, maxm = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i = i + 3)
    {
        chest += a[i];
    }
    for (int i = 1; i < n; i = i + 3)
    {
        bicep += a[i];
    }
    for (int i = 2; i < n; i = i + 3)
    {
        back += a[i];
    }

    maxm = max({chest, bicep, back});
    if (maxm == chest)
    {
        cout << "chest" << endl;
    }
    else if (maxm == bicep)
    {
        cout << "biceps" << endl;
    }
    else if (maxm == back)
    {
        cout << "back" << endl;
    }
}
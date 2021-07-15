#include <bits/stdc++.h>

#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define YESNO(cond) (cond) ? cout << "YES\n" : cout << "NO\n"
#define ll long long
#define endl "\n"

using namespace std;
//================= Main Func ==========================//
int main()
{
    // FASTIO;
    bool odd = true;

    for (int i = 0; i < 10; i++)
    {
        if (odd)
        {
            cout << i << endl;
        }
        else
        {
            cout << i * i << endl;
        }
        odd = !odd;
    }

    return 0;
}

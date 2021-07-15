#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, sum = 0;
        cin >> n;
        string a;
        cin >> a;
        int b[n] = {0};

        b[0] = 1;
        for (int i = 1; i < n; i++)
        {
            // cout << "sdklfjs";
            sum = (a.at(i - 1) - '0') + b[i - 1];
            if (sum == (a.at(i) - '0') + 1)
            {

                b[i] = 0;
            }
            else
            {

                b[i] = 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << b[i];
        }
        cout << endl;
    }
}

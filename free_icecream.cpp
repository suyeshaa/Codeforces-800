#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, x, sum = 0, distress = 0;
    cin >> n >> x;
    sum = x;
    long long i = 0;
    for (i = 0; i < n; i++)
    {
        char s;
        long long int a;
        cin >> s >> a;

        if (s == '+')
        {
            sum += a;
        }
        else if (s == '-')
        {
            if (sum - a < 0)
            {
                distress++;
            }
            else
            {
                sum -= a;
            }
        }
    }

    cout << sum << " " << distress;
}

#include <iostream>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k, sum1 = 0, sum2 = 0;
        cin >> n >> k;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int p = 0;
        k *= 2;
        // cout << k << endl;
        bool odd = false;
        for (long long i = n - 1; i >= 0; i--)
        {
            if (k == 0)
            {
                p = i;
                break;
            }
            // cout << k << endl;
            if (odd)
            {
                // cout << "a\n";
                sum1 += a[i];
            }
            else
            {
                // cout << "dsf\n";
                sum2 += a[i];
            }
            odd = !odd;
            // cout << "ODD :" << odd;
            k--;
        }
        // cout << sum1 << " " << sum2 << endl;
        cout << max(sum1, sum2 + a[p]) << endl;
    }
}

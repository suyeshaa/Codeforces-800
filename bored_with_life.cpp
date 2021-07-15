#include <bits/stdc++.h>
using namespace std;

//aise nhi hoga kyunki vo bdi value ka fact nikalna mushqil h
//tutorial*
// long int fact(long int num)
// {
//     if (num == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return (num * fact(num - 1));
//     }
// }
// long int gcd(long int num_1, long int num_2)
// {
//     if (num_2 == 0)
//     {
//         return num_1;
//     }
//     else
//     {
//         return gcd(num_2, num_1 % num_2);
//     }
// }
// int main()
// {
//     long int n, m, gcd_num = 0, fact_1 = 0, fact_2 = 0;
//     cin >> n >> m;
//     fact_1 = fact(n);
//     fact_2 = fact(m);
//     // cout<<fact(n);
//     // cout<<gcd( n,m );
//     gcd_num = gcd(fact_1, fact_2);
//     cout << gcd_num;
// }

int main()
{
    long long int a, b;
    cin >> a >> b;
    long long gcd = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        gcd *= i;
    }

    cout << gcd;
}
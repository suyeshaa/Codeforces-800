#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0, index = 0, count = 0;
        cin >> n;
        int a[n], hash[n] = {0}, b[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            hash[a[i] - 1]++;
        }

        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (hash[i] == 1)
            {
                b[j] = i;
                j++;
            }
            else
            {
                count++;
            }
        }
        // cout<<j<<endl;
        sort(b, b + j);
        s = b[0];
        int *p = &a[0];
        // cout<<s<<endl;

        if (n == 1)
        {
            cout << 1 << endl;
        }

        else if (count == n)
        {
            cout << -1 << endl;
        }

        else
        {

            auto idx = find(a, a + n, s);
            index = idx - p;
            cout << index + 1 << endl;
        }
    }

    // while(t--){
    //     long long int n , a;
    //     cin>>n;
    //     set<int>s;
    //     for(int i=0 ; i<n ; i++){
    //         cin>>a;
    //         s.insert(a) ;
    //     }
    //     if(s.size() == 1){
    //         cout<<-1<<endl;
    //     }
    //     else{
    //         cout<<*s.begin()<<endl;
    //     }
    // }
}
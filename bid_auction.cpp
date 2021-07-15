#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> vec;
        long long int n;
        cin >> n;
        int a[n], hash[n] = {0};
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> a[i];
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     hash[a[i] - 1]++;
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     if (hash[i] == 1)
        //     {
        //         vec.push_back(make_pair(a[i], hash[i]));
        //     }
        // }
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            vec.push_back(make_pair(temp, i));
            hash[temp - 1]++;
        }
        for (auto x : hash)
        {
            cout << x << " ";
        }
        cout << endl;
        sort(vec.begin(), vec.end());
        // for (int i = 0; i < n; i++)
        // {
        //     if (hash[i] == 1)
        //     {
        //         auto pos = find(vec.begin(), vec.end(), i + 1);
        //         cout << vec[pos].second << endl;
        //     }
        // }

        // sort(vec.begin(), vec.end());

        // for (auto x : vec)
        // {
        //     cout << x.first << " " << x.second << endl;
        // }
    }
}
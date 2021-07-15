#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int j = 0;
        int count = 0, d = 0, idx = 0, alice_count = 0, bob_count = 0;

        for (int i = 0; i < s.length(); i++)
        {

            // if (count > d)
            // {
            //     // idx = i;
            //     d = count;
            // }
            while (s.at(i) == '1')
            {
                count++;
                i++;
                if (i >= s.length())
                    break;
            }
            if (count > 0)
                cout << count << endl;
            count = 0;
            // if (s.at(i) == s.at(i + 1) and s.at(i) == '1')
            // {
            //     count++;
            // }
            // else
            // {
            //     d++;
            //     cout << count << endl;
            //     if (d % 2 == 0)
            //     {
            //         bob_count += count;
            //     }
            //     else
            //     {
            //         alice_count += count;
            //     }
            //     count = 1;
            // }
        }
        // cout << alice_count << endl;
        // cout << bob_count;
    }
}
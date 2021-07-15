#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a[s.length()] = {0};
        int count = 1, alice_sum = 0;

        if (s.length() == 1)
        {
            if (s.at(0) == '1')
            {
                alice_sum = 1;
            }
        }
        else
        {

            int j = 0;

            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s.at(i) == '1')
                {
                    if (s.at(i + 1) == '1')
                    {
                        count++;
                        if (i == s.length() - 2)
                        {
                            a[j] = count;
                            j++;
                        }
                    }

                    else
                    {
                        a[j] = count;
                        j++;
                        count = 1;
                    }
                }
                else if (s.at(i + 1) == '1')
                {
                    a[j] = 1;
                }
            }
        }

        //sorting in descending order
        sort(a, a + s.length(), compare);

        for (int i = 0; i < s.length(); i = i + 2)
        {
            alice_sum += a[i];
        }

        cout << alice_sum << endl;

        //     for (int i = 0; i < s.length(); i++)
        //     {
        //         cout << a[i] << " ";
        //     }
        //     cout << endl;
        // }
    }
}
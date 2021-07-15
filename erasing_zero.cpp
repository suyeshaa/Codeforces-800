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
        int count = 0;

        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s.at(i) == '1')
            {
                // count = 0;
                int j = i + 1;

                if (s.at(j) == '0')
                {
                    for (int k = j + 1; k < s.length(); k++)
                    {
                        if (s.at(k) == '1')
                        {
                            // cout << "haan vai pahuch gaya" << endl;
                            count += k - j;
                            break;
                        }
                    }
                    // cout << count << endl;
                    j++;
                }
                else
                {
                    j++;
                }

                // for (int j = i + 1; j < s.length(); j++)
                // {
                //     if (s.at(j) == '1')
                //     {
                //         count += j - i - 1;
                //     }
                // }
                // if (s.at(i + 1) == '0')
                //     for (int j = i + 1; j < s.length() - 1; j++)
                //     {
                //         if (s.at(j + 1) == '0')
                //         {
                //             count++;
                //         }
                //         else
                //         {
                //             break;
                //         }
                //     }
            }
        }

        cout << count << endl;
    }
}
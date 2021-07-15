#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            for (int k = j + 1; k < s.length(); k++)
            {
                if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}
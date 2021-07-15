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
        for (int i = 0; i < s.length(); i = i + 2)
        {
            if (s.at(i) == 'a')
            {
                s.at(i) = 'b';
            }
            else
            {
                s.at(i) = 'a';
            }
            // int ascii = int(s.at(i))+1;
            // s.at(i)= char(ascii);
        }
        for (int i = 1; i < s.length(); i = i + 2)
        {
            if (s.at(i) == 'z')
            {
                s.at(i) = 'y';
            }
            else
            {
                s.at(i) = 'z';
            }
        }

        cout << s << endl;
    }
}
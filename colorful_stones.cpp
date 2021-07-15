#include <bits/stdc++.h>
using namespace std;
int main()
{
    int steps = 1;
    string s1, s2;
    cin >> s1 >> s2;
    char c = s1.at(0);

    int j = 0;
    for (int i = 0; i < s2.length(); i++)
    {
        if (s1.at(j) == s2.at(i))
        {
            j++;
            steps++;
        }
    }

    cout << steps << endl;
}
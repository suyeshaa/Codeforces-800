#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int i = 0;
    int gap = 1;
    while (i < n)
    {
        cout << s.at(i);
        i = i + gap;
        gap++;
    }
}
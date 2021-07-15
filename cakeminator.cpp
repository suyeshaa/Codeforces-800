#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, sum_1 = 0, sum_2 = 0;
    cin >> r >> c;
    char a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    //to check rows

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 'S')
            {
                sum_1++;
                break;
            }
        }
    }

    // to check col

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (a[j][i] == 'S')
            {
                sum_2++;
                break;
            }
        }
    }

    cout << (r * c) - (sum_1 * sum_2) << endl;
}
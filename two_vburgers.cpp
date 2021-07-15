#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, p, f;
        cin >> b >> p >> f;
        int h, c;
        cin >> h >> c;

        int maxim = 0, burg = 0, profit = 0, minim = 0, minim_1 = 0;
        maxim = max(h, c);
        burg = b / 2;

        if (maxim == h)
        {
            minim_1 = min(burg, p);
            profit = minim_1 * h;

            burg -= minim_1;
            if (burg > 0)
            {
                minim = min(burg, f);
                profit += minim * c;
            }
        }
        else if (maxim == c)
        {
            minim_1 = min(burg, f);
            profit = minim_1 * c;

            burg -= minim_1;
            if (burg > 0)
            {
                minim = min(burg, p);
                profit += minim * h;
            }
        }

        cout << profit << endl;
    }
}
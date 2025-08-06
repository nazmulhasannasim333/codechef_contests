#include <bits/stdc++.h>
using namespace std;

bool possible(int a1, int b1, int a2, int b2)
{
    int max_d = min(a1, b1);
    for (int d = 0; d <= max_d; d++)
    {
        int g = a1 - d, s = b1 - d;
        int dg = a2 - g, ds = b2 - s;
        if (g - a2 == (b2 - s) / 5 && (b2 - s) % 5 == 0)
        {
            int x = g - a2;
            int gold = g, silver = s;
            gold -= x;
            silver += 5 * x;
            if (gold >= 0 && silver >= 0 && gold == a2 && silver == b2)
                return true;
        }
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        cout << (possible(a1, b1, a2, b2) ? "Yes" : "No") << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        int ans = 1e9;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i == j)
                    continue;
                int cost;
                if (j == i + 1)
                {
                    cost = a[i] + a[j] / 2;
                }
                else
                {
                    cost = a[i] + a[j];
                }
                ans = min(ans, cost);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
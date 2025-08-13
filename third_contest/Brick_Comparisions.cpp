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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max_size = a[0];
        int max_index = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > max_size)
            {
                max_size = a[i];
                max_index = i + 1;
            }
        }
        cout << max_index << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int odd = 0, even = 0;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
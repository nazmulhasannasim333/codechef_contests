#include <bits/stdc++.h>
using namespace std;

long long solve_one(long long N)
{
    if (N & 1)
    {
        return (N + 1) / 2;
    }
    else if ((N % 4) == 0)
    {
        return (3 * (N / 4));
    }
    else
    {
        return (3 * N + 2) / 4;
    }
}

int main()
{
    int T;
    if (!(cin >> T))
        return 0;
    while (T--)
    {
        long long N;
        cin >> N;
        cout << solve_one(N) << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        vector<vector<int>> grid(N, vector<int>(N));
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                grid[i][j] = (i + j) % N;
        for (int i = N - 1; i >= 0; --i)
        {
            for (int j = 0; j < N; ++j)
            {
                cout << grid[i][j] << (j == N - 1 ? '\n' : ' ');
            }
        }
    }
    return 0;
}
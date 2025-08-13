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
        vector<int> A(N);
        unordered_map<int, int> freq;

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            freq[A[i]]++;
        }

        int ans = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] != 1)
                ans++;
        }

        for (auto &p : freq)
        {
            int color = p.first;
            int correct_after_global = p.second;
            int time = 1 + (N - correct_after_global);
            ans = min(ans, time);
        }

        cout << ans << endl;
    }
    return 0;
}

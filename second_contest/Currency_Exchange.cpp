#include <bits/stdc++.h>
using namespace std;

bool visited[1001][1001]; // faster than set

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;

        memset(visited, false, sizeof(visited));

        queue<pair<int, int>> q;
        q.push({a1, b1});
        visited[a1][b1] = true;

        bool found = false;

        while (!q.empty())
        {
            auto [g, s] = q.front();
            q.pop();

            if (g == a2 && s == b2)
            {
                found = true;
                break;
            }

            if (g > 0 && s > 0 && !visited[g - 1][s - 1])
            {
                visited[g - 1][s - 1] = true;
                q.push({g - 1, s - 1});
            }

            if (g > 0 && s + 5 <= 1000 && !visited[g - 1][s + 5])
            {
                visited[g - 1][s + 5] = true;
                q.push({g - 1, s + 5});
            }

            if (s >= 5 && g + 1 <= 1000 && !visited[g + 1][s - 5])
            {
                visited[g + 1][s - 5] = true;
                q.push({g + 1, s - 5});
            }
        }

        cout << (found ? "Yes" : "No") << endl;
    }
    return 0;
}

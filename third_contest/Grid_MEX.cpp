#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<vector<int>> A(N, vector<int>(N));

        // Step 1: fill with 0..N-1 in a cyclic shift
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                A[i][j] = (i + j) % N;
            }
        }

        // Step 2: put N on the main diagonal
        for (int i = 0; i < N; i++) {
            A[i][i] = N;
        }

        // Output
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << A[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

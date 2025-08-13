#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;  // number of test cases
    while (T--) {
        int N;
        cin >> N;  // size of arrays
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> B[i];

        vector<int> lo(N), hi(N);
        for (int i = 0; i < N; i++) {
            lo[i] = min(A[i], B[i]);
            hi[i] = max(A[i], B[i]);
        }

        long long ans = 0;
        int R = 0;  // right pointer
        int max_lo = -1, min_hi = 2 * N + 1;

        for (int L = 0; L < N; L++) {
            // Reset pointers if R is behind L
            if (R < L) {
                R = L;
                max_lo = lo[L];
                min_hi = hi[L];
            }

            // Extend R as long as the subarray [L..R] is perfect
            while (R < N && max(max_lo, lo[R]) < min(min_hi, hi[R])) {
                max_lo = max(max_lo, lo[R]);
                min_hi = min(min_hi, hi[R]);
                R++;
            }

            ans += R - L; // count all perfect subarrays starting at L

            // Prepare max_lo and min_hi for next L
            if (L + 1 < N) {
                max_lo = lo[L + 1];
                min_hi = hi[L + 1];
            }
        }

        cout << ans << "\n";
    }
}

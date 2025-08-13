#include <bits/stdc++.h>
using namespace std;

unordered_map<long long, int> memo;

int solve(long long n) {
    if (memo.count(n)) return memo[n];
    int res = 1;
    if (n > 2) res += solve(n - 2);
    if (n > 1 && n % 2 == 0) res += solve(n / 2);
    return memo[n] = res;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        memo.clear();
        cout << solve(N) << endl;
    }
    return 0;
}
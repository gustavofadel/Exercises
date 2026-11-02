#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back

typedef vector<int> vi;

const int MAX_SUM = 2505;

bitset<MAX_SUM> dp[30];

int32_t main() {
    fastio;

    int n;
    if (!(cin >> n)) return 0;

    vi f(n);
    int total_sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> f[i];
        total_sum += f[i];
    }

    int half_n = n / 2;

    dp[0][0] = 1;

    for (int i = 0; i < n; ++i) {
        int val = f[i];
        int max_c = min(half_n, (int)i + 1);
        for (int c = max_c; c >= 1; --c) {
            dp[c] |= (dp[c - 1] << val);
        }
    }

    int target = total_sum / 2;
    int best_s = 0;

    for (int s = target; s >= 0; --s) {
        if (dp[half_n][s]) {
            best_s = s;
            break;
        }
    }

    int min_diff = total_sum - 2 * best_s;
    cout << min_diff << "\n";

    return 0;
}
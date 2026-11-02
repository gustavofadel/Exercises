#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;

const int MOD = 1e9 + 7;
const int MAXN = 1005;

int dp[MAXN][MAXN];

int32_t main() {
    fastio;

    int n, k;
    if (!(cin >> n >> k)) return 0;

    if (k < 0 || k > (n - 1) / 2) {
        cout << 0 << "\n";
        return 0;
    }

    dp[1][0] = 1;

    for (int i = 2; i <= n; ++i) {
        int max_k = (i - 1) / 2;
        for (int j = 0; j <= max_k; ++j) {
            int keep = (2 * j + 2) * dp[i - 1][j] % MOD;
            int add = 0;
            if (j > 0) {
                add = (i - 2 * j) * dp[i - 1][j - 1] % MOD;
            }
            dp[i][j] = (keep + add) % MOD;
        }
    }

    cout << dp[n][k] << "\n";

    return 0;
}
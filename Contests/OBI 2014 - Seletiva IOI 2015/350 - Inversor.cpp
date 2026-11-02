#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;

const int INF = 2e18;

int32_t main() {
    fastio;

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vi v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int cur_sum = 0;
    for (int i = 0; i < k; ++i) {
        cur_sum += v[i];
    }

    int num_intervals = n - k + 1;
    vi inv_s(num_intervals);
    inv_s[0] = -cur_sum;

    for (int i = 1; i < num_intervals; ++i) {
        cur_sum += v[i + k - 1] - v[i - 1];
        inv_s[i] = -cur_sum;
    }

    int max_pref = -INF;
    int ans = -INF;

    for (int j = k; j < num_intervals; ++j) {
        max_pref = max(max_pref, inv_s[j - k]);
        ans = max(ans, max_pref + inv_s[j]);
    }

    cout << ans << "\n";

    return 0;
}
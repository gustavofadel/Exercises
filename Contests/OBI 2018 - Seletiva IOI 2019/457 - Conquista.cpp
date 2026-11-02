#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

using ll = long long;

int main() {
    fastio;
    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<ll> dp(m + 1);
    vector<ll> a(m + 1);

    rep(j, 1, m + 1) {
        cin >> a[j];
    }

    dp[1] = a[1];
    rep(j, 2, m + 1) {
        dp[j] = dp[j - 1] + a[j];
    }

    vector<ll> from_up(m + 1);
    vector<ll> l(m + 1);
    vector<ll> r(m + 2);

    rep(i, 2, n + 1) {
        rep(j, 1, m + 1) {
            cin >> a[j];
            from_up[j] = dp[j] + a[j];
        }

        l[1] = from_up[1];
        rep(j, 2, m + 1) {
            l[j] = max(from_up[j], l[j - 1] + a[j]);
        }

        r[m] = from_up[m];
        for (int j = m - 1; j >= 1; --j) {
            r[j] = max(from_up[j], r[j + 1] + a[j]);
        }

        rep(j, 1, m + 1) {
            dp[j] = max(l[j], r[j]);
        }
    }

    cout << dp[m] << "\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

typedef pair<int, int> pii;
typedef vector<int> vi;

int32_t main() {
    fastio;

    int n, l, r;
    if (!(cin >> n >> l >> r)) return 0;

    vi v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    int total_risk = 0;
    vector<pii> prev;

    for (int i = 0; i < n; ++i) {
        vector<pii> cur;
        cur.pb({v[i], 1});

        for (auto &p : prev) {
            int g = std::gcd(p.fi, v[i]);
            if (g == cur.back().fi) {
                cur.back().se += p.se;
            } else {
                cur.pb({g, p.se});
            }
        }

        for (auto &p : cur) {
            int eff_min = max(l, p.fi);
            if (eff_min <= r) {
                total_risk += p.se * (r - eff_min + 1);
            }
        }

        prev = move(cur);
    }

    cout << total_risk << "\n";

    return 0;
}
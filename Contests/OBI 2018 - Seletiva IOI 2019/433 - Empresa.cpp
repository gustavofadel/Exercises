#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

using ll = long long;

int main() {
    fastio;
    int n;
    if (!(cin >> n)) return 0;

    vector<vector<int>> children(n + 1);
    rep(i, 1, n) {
        int p;
        cin >> p;
        children[p].pb(i + 1);
    }

    vector<int> t(n + 1);
    rep(i, 1, n + 1) {
        cin >> t[i];
    }

    vector<int> depth(n + 1, 0);
    vector<int> q;
    q.reserve(n);
    depth[1] = 0;
    q.pb(1);

    int max_d = 0;
    rep(idx, 0, sz(q)) {
        int u = q[idx];
        max_d = max(max_d, depth[u]);
        for (int v : children[u]) {
            depth[v] = depth[u] + 1;
            q.pb(v);
        }
    }

    vector<vector<int>> levels(max_d + 1);
    rep(i, 1, n + 1) {
        levels[depth[i]].pb(i);
    }

    vector<ll> s(n + 1, 1);

    for (int d = max_d; d >= 0; --d) {
        sort(all(levels[d]), [&](int a, int b) {
            return t[a] < t[b];
        });

        int prev_node = -1;
        for (int u : levels[d]) {
            ll max_child = 0;
            for (int v : children[u]) {
                max_child = max(max_child, s[v]);
            }
            s[u] = max_child + 1;
            if (prev_node != -1) {
                s[u] = max(s[u], s[prev_node] + 1);
            }
            prev_node = u;
        }
    }

    ll total = 0;
    rep(i, 1, n + 1) {
        total += s[i];
    }

    cout << total << "\n";
    return 0;
}
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

using ll = long long;

const ll INF = 2e18;

int main() {
    fastio;
    int n;
    if (!(cin >> n)) return 0;

    vector<int> to(n + 1);
    vector<ll> c(n + 1);
    vector<int> in_deg(n + 1, 0);
    vector<vector<int>> in_edges(n + 1);

    ll total_cost = 0;
    rep(i, 1, n + 1) {
        cin >> to[i] >> c[i];
        total_cost += c[i];
        in_deg[to[i]]++;
        in_edges[to[i]].pb(i);
    }

    queue<int> q;
    rep(i, 1, n + 1) {
        if (in_deg[i] == 0) {
            q.push(i);
        }
    }

    vector<bool> in_cycle(n + 1, true);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        in_cycle[u] = false;
        int v = to[u];
        in_deg[v]--;
        if (in_deg[v] == 0) {
            q.push(v);
        }
    }

    vector<bool> vis(n + 1, false);
    vector<vector<int>> cycles;
    rep(i, 1, n + 1) {
        if (in_cycle[i] && !vis[i]) {
            vector<int> cyc;
            int cur = i;
            while (!vis[cur]) {
                vis[cur] = true;
                cyc.pb(cur);
                cur = to[cur];
            }
            cycles.pb(cyc);
        }
    }

    if (sz(cycles) == 1 && sz(cycles[0]) == n) {
        cout << 0 << "\n";
        return 0;
    }

    ll max_kept = 0;

    rep(i, 1, n + 1) {
        if (!in_cycle[i]) {
            ll best_in = 0;
            for (int u : in_edges[i]) {
                best_in = max(best_in, c[u]);
            }
            max_kept += best_in;
        }
    }

    for (const auto& cyc : cycles) {
        ll sum_a = 0;
        ll min_diff = INF;
        bool has_non_positive_diff = false;
        ll cyc_kept_if_broken = 0;

        for (int v : cyc) {
            ll best_tree_in = 0;
            for (int u : in_edges[v]) {
                if (!in_cycle[u]) {
                    best_tree_in = max(best_tree_in, c[u]);
                }
            }

            int u_cyc = -1;
            for (int u : in_edges[v]) {
                if (in_cycle[u]) {
                    u_cyc = u;
                    break;
                }
            }

            ll a = c[u_cyc];
            ll b = best_tree_in;
            ll diff = a - b;

            sum_a += a;
            min_diff = min(min_diff, diff);
            if (diff <= 0) {
                has_non_positive_diff = true;
            }
            cyc_kept_if_broken += max(a, b);
        }

        if (has_non_positive_diff) {
            max_kept += cyc_kept_if_broken;
        } else {
            max_kept += sum_a - min_diff;
        }
    }

    cout << total_cost - max_kept << "\n";
    return 0;
}
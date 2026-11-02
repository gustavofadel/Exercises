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

const ll INF = 1e18;

struct Edge {
    int to;
    ll w;
};

int n, k;
vector<vector<Edge>> adj;
ll ans = INF;

vector<ll> dfs(int u, int p) {
    vector<ll> dp = {INF, 0};
    int cur_sz = 1;

    for (const auto& edge : adj[u]) {
        int v = edge.to;
        ll w = edge.w;
        if (v == p) continue;

        vector<ll> dp_v = dfs(v, u);
        int v_sz = sz(dp_v) - 1;

        int next_sz = min(k, cur_sz + v_sz);
        vector<ll> next_dp(next_sz + 1, INF);

        rep(i, 1, min(cur_sz, next_sz) + 1) {
            next_dp[i] = dp[i];
        }

        rep(i, 1, min(cur_sz, k) + 1) {
            if (dp[i] == INF) continue;
            rep(j, 1, min(v_sz, k - i) + 1) {
                if (dp_v[j] == INF) continue;
                next_dp[i + j] = min(next_dp[i + j], dp[i] + dp_v[j] + w);
            }
        }

        dp = move(next_dp);
        cur_sz = next_sz;
    }

    if (sz(dp) > k) {
        ans = min(ans, dp[k]);
    }

    return dp;
}

int main() {
    fastio;
    if (!(cin >> n >> k)) return 0;

    adj.assign(n + 1, vector<Edge>());
    rep(i, 0, n - 1) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        adj[u].pb({v, w});
        adj[v].pb({u, w});
    }

    if (k == 1) {
        cout << 0 << "\n";
        return 0;
    }

    dfs(1, 0);

    cout << ans << "\n";
    return 0;
}
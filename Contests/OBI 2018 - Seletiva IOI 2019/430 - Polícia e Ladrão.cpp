#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

const int MAXN = 100005;
const int LOGN = 18;

vector<int> adj[MAXN];
int up[LOGN][MAXN];
int depth[MAXN];
pair<int, int> first_down[MAXN];
pair<int, int> second_down[MAXN];
int max_up[MAXN];

void dfs1(int u, int p, int d) {
    depth[u] = d;
    up[0][u] = p;
    rep(i, 1, LOGN) {
        up[i][u] = up[i - 1][up[i - 1][u]];
    }
    first_down[u] = {0, -1};
    second_down[u] = {0, -1};
    for (int v : adj[u]) {
        if (v == p) continue;
        dfs1(v, u, d + 1);
        int val = 1 + first_down[v].first;
        if (val > first_down[u].first) {
            second_down[u] = first_down[u];
            first_down[u] = {val, v};
        } else if (val > second_down[u].first) {
            second_down[u] = {val, v};
        }
    }
}

void dfs2(int u, int p) {
    for (int v : adj[u]) {
        if (v == p) continue;
        int best_other = 0;
        if (first_down[u].second == v) {
            best_other = second_down[u].first;
        } else {
            best_other = first_down[u].first;
        }
        max_up[v] = 1 + max(max_up[u], best_other);
        dfs2(v, u);
    }
}

int get_kth_ancestor(int u, int k) {
    rep(i, 0, LOGN) {
        if ((k >> i) & 1) {
            u = up[i][u];
        }
    }
    return u;
}

int get_lca(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);
    u = get_kth_ancestor(u, depth[u] - depth[v]);
    if (u == v) return u;
    for (int i = LOGN - 1; i >= 0; --i) {
        if (up[i][u] != up[i][v]) {
            u = up[i][u];
            v = up[i][v];
        }
    }
    return up[0][u];
}

int main() {
    fastio;
    int n, q;
    if (!(cin >> n >> q)) return 0;

    rep(i, 0, n - 1) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    dfs1(1, 1, 0);
    max_up[1] = 0;
    dfs2(1, 1);

    while (q--) {
        int c, d;
        cin >> c >> d;
        int lca = get_lca(c, d);
        int d_c = depth[c] - depth[lca];
        int d_d = depth[d] - depth[lca];
        int k = d_c + d_d;
        int m = k / 2;

        auto get_node_on_path = [&](int dist_from_c) {
            if (dist_from_c <= d_c) {
                return get_kth_ancestor(c, dist_from_c);
            } else {
                return get_kth_ancestor(d, k - dist_from_c);
            }
        };

        int pm = get_node_on_path(m);
        int pm1 = get_node_on_path(m + 1);

        int h = 0;
        if (up[0][pm1] == pm) {
            h = first_down[pm1].first;
        } else {
            int best_other_down = 0;
            if (first_down[pm1].second == pm) {
                best_other_down = second_down[pm1].first;
            } else {
                best_other_down = first_down[pm1].first;
            }
            h = max(max_up[pm1], best_other_down);
        }

        cout << 2 * (m + 1 + h) << "\n";
    }

    return 0;
}
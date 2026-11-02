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

const int INF = 1e16;
const int MAXN = 100005;
const int LOGN = 18;

struct Data {
    int len;
    int max_A;
    int max_B;
    int ans;
};

Data make_data(int h) {
    return {1, h, h, -INF};
}

Data merge_data(const Data& l, const Data& r) {
    if (l.len == 0) return r;
    if (r.len == 0) return l;
    Data res;
    res.len = l.len + r.len;
    res.max_A = max(l.max_A, r.max_A + l.len);
    res.max_B = max(l.max_B, r.max_B - l.len);
    int cross = -INF;
    if (l.max_A > -INF / 2 && r.max_B > -INF / 2) {
        cross = l.max_A + r.max_B - l.len;
    }
    res.ans = max({l.ans, r.ans, cross});
    return res;
}

vi adj[MAXN];
int dep[MAXN];
int up_node[LOGN][MAXN];
Data up_data[LOGN][MAXN];
Data down_data[LOGN][MAXN];

int max_down[MAXN];
vector<pii> best_dirs[MAXN];
int W[MAXN];

void dfs_down(int u, int p) {
    max_down[u] = 0;
    for (int v : adj[u]) {
        if (v == p) continue;
        dep[v] = dep[u] + 1;
        up_node[0][v] = u;
        dfs_down(v, u);
        max_down[u] = max(max_down[u], 1 + max_down[v]);
        best_dirs[u].pb({1 + max_down[v], v});
    }
    sort(all(best_dirs[u]), greater<pii>());
    if (best_dirs[u].size() > 3) best_dirs[u].resize(3);

    int m1 = 0, c1 = 0, m2 = 0;
    for (int v : adj[u]) {
        if (v == p) continue;
        int val = 1 + max_down[v];
        if (val > m1) {
            m2 = m1;
            m1 = val;
            c1 = v;
        } else if (val > m2) {
            m2 = val;
        }
    }
    for (int v : adj[u]) {
        if (v == p) continue;
        W[v] = (v == c1 ? m2 : m1);
    }
}

void dfs_up(int u, int p, int up_dist) {
    if (p != 0) {
        best_dirs[u].pb({up_dist, p});
        sort(all(best_dirs[u]), greater<pii>());
        if (best_dirs[u].size() > 3) best_dirs[u].resize(3);
    }

    for (int v : adj[u]) {
        if (v == p) continue;
        int best_other = 0;
        for (const auto& edge : best_dirs[u]) {
            if (edge.se != v) {
                best_other = max(best_other, edge.fi);
            }
        }
        dfs_up(v, u, 1 + best_other);
    }
}

int get_H(int u, int ex1, int ex2) {
    for (const auto& edge : best_dirs[u]) {
        if (edge.se != ex1 && edge.se != ex2) {
            return edge.fi;
        }
    }
    return 0;
}

int lift_node(int u, int steps) {
    for (int k = 0; k < LOGN; ++k) {
        if ((steps >> k) & 1) {
            u = up_node[k][u];
        }
    }
    return u;
}

int get_lca(int u, int v) {
    if (dep[u] < dep[v]) swap(u, v);
    u = lift_node(u, dep[u] - dep[v]);
    if (u == v) return u;
    for (int k = LOGN - 1; k >= 0; --k) {
        if (up_node[k][u] != up_node[k][v]) {
            u = up_node[k][u];
            v = up_node[k][v];
        }
    }
    return up_node[0][u];
}

Data get_path_up(int u, int len) {
    Data res = {0, -INF, -INF, -INF};
    for (int k = LOGN - 1; k >= 0; --k) {
        if ((len >> k) & 1) {
            res = merge_data(res, up_data[k][u]);
            u = up_node[k][u];
        }
    }
    return res;
}

Data get_path_down(int v, int len) {
    vector<Data> pieces;
    for (int k = 0; k < LOGN; ++k) {
        if ((len >> k) & 1) {
            pieces.pb(down_data[k][v]);
            v = up_node[k][v];
        }
    }
    reverse(all(pieces));
    Data res = {0, -INF, -INF, -INF};
    for (const auto& p : pieces) {
        res = merge_data(res, p);
    }
    return res;
}

int32_t main() {
    fastio;

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    dep[1] = 0;
    up_node[0][1] = 1;
    dfs_down(1, 0);
    dfs_up(1, 0, 0);

    for (int i = 1; i <= n; ++i) {
        up_data[0][i] = make_data(W[i]);
        down_data[0][i] = make_data(W[i]);
    }

    for (int k = 1; k < LOGN; ++k) {
        for (int i = 1; i <= n; ++i) {
            int anc = up_node[k - 1][i];
            up_node[k][i] = up_node[k - 1][anc];
            up_data[k][i] = merge_data(up_data[k - 1][i], up_data[k - 1][anc]);
            down_data[k][i] = merge_data(down_data[k - 1][anc], down_data[k - 1][i]);
        }
    }

    int q;
    if (!(cin >> q)) return 0;

    while (q--) {
        int c, d;
        cin >> c >> d;

        int l = get_lca(c, d);
        int dist_c = dep[c] - dep[l];
        int dist_d = dep[d] - dep[l];
        int k = dist_c + dist_d;

        int next_c = (l == c ? lift_node(d, dist_d - 1) : up_node[0][c]);
        int next_d = (l == d ? lift_node(c, dist_c - 1) : up_node[0][d]);

        int h_c = get_H(c, next_c, 0);
        int h_d = get_H(d, next_d, 0);

        Data data_c = make_data(h_c);
        Data data_d = make_data(h_d);

        Data total = data_c;

        if (l == c) {
            if (k > 1) {
                int child_d = lift_node(d, dist_d - 1);
                Data data_down = get_path_down(d, k - 1);
                total = merge_data(total, data_down);
            }
        } else if (l == d) {
            if (k > 1) {
                Data data_up = get_path_up(c, k - 1);
                total = merge_data(total, data_up);
            }
        } else {
            if (dist_c > 1) {
                Data data_up = get_path_up(c, dist_c - 1);
                total = merge_data(total, data_up);
            }

            int child_c = lift_node(c, dist_c - 1);
            int child_d = lift_node(d, dist_d - 1);
            int h_l = get_H(l, child_c, child_d);
            Data data_l = make_data(h_l);
            total = merge_data(total, data_l);

            if (dist_d > 1) {
                Data data_down = get_path_down(d, dist_d - 1);
                total = merge_data(total, data_down);
            }
        }

        total = merge_data(total, data_d);

        int total_ans = 1 + k + total.ans;
        cout << total_ans << "\n";
    }

    return 0;
}
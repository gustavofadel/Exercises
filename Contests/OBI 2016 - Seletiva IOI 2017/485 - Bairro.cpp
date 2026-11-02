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

const int MAXV = 200005;

int n, k;
vi adj[MAXV];
int w[MAXV];
int sz_tree[MAXV];
bool deleted_node[MAXV];
int ans[MAXV];

void get_sz(int u, int p) {
    sz_tree[u] = 1;
    for (int v : adj[u]) {
        if (v != p && !deleted_node[v]) {
            get_sz(v, u);
            sz_tree[u] += sz_tree[v];
        }
    }
}

int get_centroid(int u, int p, int total) {
    for (int v : adj[u]) {
        if (v != p && !deleted_node[v]) {
            if (sz_tree[v] > total / 2) {
                return get_centroid(v, u, total);
            }
        }
    }
    return u;
}

void get_branch_nodes(int u, int p, int d, vector<pii>& nodes) {
    nodes.pb({d, u});
    for (int v : adj[u]) {
        if (v != p && !deleted_node[v]) {
            get_branch_nodes(v, u, d + 1, nodes);
        }
    }
}

void decompose(int u) {
    get_sz(u, 0);
    int total = sz_tree[u];
    int c = get_centroid(u, 0, total);
    deleted_node[c] = true;

    vector<vector<pii>> branches;
    int max_all_d = 0;

    for (int v : adj[c]) {
        if (!deleted_node[v]) {
            vector<pii> b_nodes;
            get_branch_nodes(v, c, 1, b_nodes);
            for (const auto& p : b_nodes) {
                max_all_d = max(max_all_d, p.fi);
            }
            branches.pb(move(b_nodes));
        }
    }

    vi all_pref(max_all_d + 1, 0);
    if (w[c] == 1) {
        all_pref[0] = 1;
    }

    for (const auto& b_nodes : branches) {
        for (const auto& p : b_nodes) {
            int d = p.fi;
            int node = p.se;
            if (w[node] == 1) {
                all_pref[d]++;
            }
        }
    }

    for (int i = 1; i <= max_all_d; ++i) {
        all_pref[i] += all_pref[i - 1];
    }

    ans[c] += all_pref[min(max_all_d, k)];

    for (const auto& b_nodes : branches) {
        int max_b_d = 0;
        for (const auto& p : b_nodes) {
            max_b_d = max(max_b_d, p.fi);
        }
        vi b_pref(max_b_d + 1, 0);
        for (const auto& p : b_nodes) {
            if (w[p.se] == 1) {
                b_pref[p.fi]++;
            }
        }
        for (int i = 1; i <= max_b_d; ++i) {
            b_pref[i] += b_pref[i - 1];
        }

        for (const auto& p : b_nodes) {
            int d = p.fi;
            int node = p.se;
            int rem = k - d;
            if (rem >= 0) {
                int total_cnt = all_pref[min(max_all_d, rem)];
                int b_cnt = b_pref[min(max_b_d, rem)];
                ans[node] += (total_cnt - b_cnt);
            }
        }
    }

    for (int v : adj[c]) {
        if (!deleted_node[v]) {
            decompose(v);
        }
    }
}

int32_t main() {
    fastio;

    if (!(cin >> n >> k)) return 0;

    if (n == 1) {
        cout << 1 << "\n";
        return 0;
    }

    int total_v = 2 * n - 1;
    for (int i = 1; i <= n; ++i) w[i] = 1;
    for (int i = n + 1; i <= total_v; ++i) w[i] = 0;

    for (int i = 1; i <= n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        int mid = n + i;
        adj[u].pb(mid);
        adj[mid].pb(u);
        adj[v].pb(mid);
        adj[mid].pb(v);
    }

    decompose(1);

    int max_bairro = 0;
    for (int i = 1; i <= total_v; ++i) {
        max_bairro = max(max_bairro, ans[i]);
    }

    cout << max_bairro << "\n";

    return 0;
}
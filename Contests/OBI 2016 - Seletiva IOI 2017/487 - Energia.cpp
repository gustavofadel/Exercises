#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;

const int MAX_NODES = 600005;
const int LOGN = 21;

struct Edge {
    int u, v, w;
    bool operator<(const Edge& other) const {
        return w < other.w;
    }
};

int n, m, q;
int t[MAX_NODES];
int val_node[MAX_NODES];
int sum_t[MAX_NODES];
int dsu_parent[MAX_NODES];
int up_node[LOGN][MAX_NODES];

int find_set(int v) {
    if (v == dsu_parent[v]) return v;
    return dsu_parent[v] = find_set(dsu_parent[v]);
}

int32_t main() {
    fastio;

    if (!(cin >> n >> m)) return 0;

    for (int i = 1; i <= n; ++i) {
        cin >> t[i];
        sum_t[i] = t[i];
        val_node[i] = 0;
        dsu_parent[i] = i;
    }

    vector<Edge> edges(m);
    for (int i = 0; i < m; ++i) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    sort(all(edges));

    int cur_node = n;
    for (int i = 0; i < m; ++i) {
        int root_u = find_set(edges[i].u);
        int root_v = find_set(edges[i].v);

        if (root_u != root_v) {
            cur_node++;
            val_node[cur_node] = edges[i].w;
            sum_t[cur_node] = sum_t[root_u] + sum_t[root_v];
            dsu_parent[cur_node] = cur_node;
            dsu_parent[root_u] = cur_node;
            dsu_parent[root_v] = cur_node;
            up_node[0][root_u] = cur_node;
            up_node[0][root_v] = cur_node;
        }
    }

    for (int k = 1; k < LOGN; ++k) {
        for (int i = 1; i <= cur_node; ++i) {
            int anc = up_node[k - 1][i];
            up_node[k][i] = (anc == 0 ? 0 : up_node[k - 1][anc]);
        }
    }

    if (!(cin >> q)) return 0;

    int last_ans = 0;
    while (q--) {
        int a, x;
        cin >> a >> x;

        int k_val = x + last_ans;
        int curr = a;

        for (int step = LOGN - 1; step >= 0; --step) {
            int anc = up_node[step][curr];
            if (anc != 0 && val_node[anc] <= k_val) {
                curr = anc;
            }
        }

        last_ans = sum_t[curr];
        cout << last_ans << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back

const int MAXN = 200005;

struct RollbackInfo {
    int u, v;
    int old_sz;
    int old_m[8];
};

int parent_node[MAXN];
int sz_node[MAXN];
int max_proj[MAXN][8];

int find_root(int i) {
    while (i != parent_node[i]) {
        i = parent_node[i];
    }
    return i;
}

int32_t main() {
    fastio;

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 1; i <= n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;

        parent_node[i] = i;
        sz_node[i] = 1;

        for (int mask = 0; mask < 8; ++mask) {
            int sx = (mask & 1) ? -1 : 1;
            int sy = (mask & 2) ? -1 : 1;
            int sz = (mask & 4) ? -1 : 1;
            max_proj[i][mask] = sx * x + sy * y + sz * z;
        }
    }

    int q;
    if (!(cin >> q)) return 0;

    vector<RollbackInfo> history;
    history.reserve(q);

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int u, v;
            cin >> u >> v;

            int root_u = find_root(u);
            int root_v = find_root(v);

            if (root_u == root_v) {
                history.pb({0, 0, 0, {0}});
                continue;
            }

            if (sz_node[root_u] < sz_node[root_v]) {
                swap(root_u, root_v);
            }

            RollbackInfo info;
            info.u = root_u;
            info.v = root_v;
            info.old_sz = sz_node[root_u];
            for (int mask = 0; mask < 8; ++mask) {
                info.old_m[mask] = max_proj[root_u][mask];
                max_proj[root_u][mask] = max(max_proj[root_u][mask], max_proj[root_v][mask]);
            }

            parent_node[root_v] = root_u;
            sz_node[root_u] += sz_node[root_v];
            history.pb(info);
        } else if (type == 2) {
            if (history.empty()) continue;

            RollbackInfo info = history.back();
            history.pop_back();

            if (info.u == 0) continue;

            parent_node[info.v] = info.v;
            sz_node[info.u] = info.old_sz;
            for (int mask = 0; mask < 8; ++mask) {
                max_proj[info.u][mask] = info.old_m[mask];
            }
        } else if (type == 3) {
            int u, v;
            cin >> u >> v;

            int root_u = find_root(u);
            int root_v = find_root(v);

            int max_dist = 0;
            for (int mask = 0; mask < 8; ++mask) {
                int comp_mask = 7 ^ mask;
                int cur_dist = max_proj[root_u][mask] + max_proj[root_v][comp_mask];
                if (cur_dist > max_dist) {
                    max_dist = cur_dist;
                }
            }

            cout << max_dist << "\n";
        }
    }

    return 0;
}
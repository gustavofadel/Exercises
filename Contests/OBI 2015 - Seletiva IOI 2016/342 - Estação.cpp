#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back

typedef vector<int> vi;

int32_t main() {
    fastio;

    int n, m;
    if (!(cin >> n >> m)) return 0;

    int total_nodes = 2 * n;
    vector<vi> adj(total_nodes + 1);
    vi in_degree(total_nodes + 1, 0);

    for (int i = 0; i < m; ++i) {
        int a, r, b;
        cin >> a >> r >> b;
        if (r == 1) {
            adj[a].pb(b);
            in_degree[b]++;
        } else {
            adj[b].pb(a);
            in_degree[a]++;
        }
    }

    vi lvl1(total_nodes + 1, 0);
    vi lvl2(total_nodes + 1, 0);
    queue<int> q;

    for (int i = 1; i <= total_nodes; ++i) {
        if (i % 2 == 1) {
            lvl1[i] = 1;
            lvl2[i] = 2;
        } else {
            lvl1[i] = 2;
            lvl2[i] = 1;
        }
        if (in_degree[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            lvl1[v] = max(lvl1[v], lvl1[u] + 1);
            lvl2[v] = max(lvl2[v], lvl2[u] + 1);
            in_degree[v]--;
            if (in_degree[v] == 0) {
                q.push(v);
            }
        }
    }

    int max1 = 0;
    int max2 = 0;
    for (int i = 1; i <= total_nodes; ++i) {
        max1 = max(max1, lvl1[i]);
        max2 = max(max2, lvl2[i]);
    }

    cout << min(max1, max2) << "\n";

    return 0;
}
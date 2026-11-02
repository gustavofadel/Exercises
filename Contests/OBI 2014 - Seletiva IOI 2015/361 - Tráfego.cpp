#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define fi first
#define se second

typedef pair<int, int> pii;
typedef vector<int> vi;

const int INF = 1e18;

struct Edge {
    int to;
    int d, g, r;
};

int32_t main() {
    fastio;

    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<vector<Edge>> adj(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v, d, g, r;
        cin >> u >> v >> d >> g >> r;
        adj[u].pb({v, d, g, r});
    }

    vi dist(n + 1, INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        int d_u = pq.top().fi;
        int u = pq.top().se;
        pq.pop();

        if (d_u > dist[u]) continue;
        if (u == n) break;

        for (const auto& e : adj[u]) {
            int arr_time = d_u + e.d;
            int period = e.g + e.r;
            int rem = arr_time % period;

            int wait_time = 0;
            if (rem >= e.g) {
                wait_time = period - rem;
            }

            int next_time = arr_time + wait_time;
            if (next_time < dist[e.to]) {
                dist[e.to] = next_time;
                pq.push({next_time, e.to});
            }
        }
    }

    if (dist[n] == INF) {
        cout << -1 << "\n";
    } else {
        cout << dist[n] << "\n";
    }

    return 0;
}
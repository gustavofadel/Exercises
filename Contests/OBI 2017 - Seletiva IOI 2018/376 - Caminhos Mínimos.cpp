#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back

typedef pair<int, int> pii;
typedef vector<int> vi;

const int MAXN = 10005;
const int INF = 1e18;

struct Edge {
    int to;
    int weight;
};

int n, m;
vector<Edge> adj[MAXN];
int D[MAXN];
int dist_dijk[MAXN];
int hops_dijk[MAXN];
bool vis[MAXN];

void bfs() {
    fill(D, D + n + 1, -1);
    queue<int> q;
    D[1] = 0;
    q.push(1);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (const auto& e : adj[u]) {
            if (D[e.to] == -1) {
                D[e.to] = D[u] + 1;
                q.push(e.to);
            }
        }
    }
}

struct State {
    int d;
    int h;
    int u;
    bool operator>(const State& o) const {
        if (d != o.d) return d > o.d;
        return h > o.h;
    }
};

bool check(int K) {
    fill(dist_dijk, dist_dijk + n + 1, INF);
    fill(hops_dijk, hops_dijk + n + 1, INF);
    fill(vis, vis + n + 1, false);

    priority_queue<State, vector<State>, greater<State>> pq;

    dist_dijk[1] = 0;
    hops_dijk[1] = 0;
    pq.push({0, 0, 1});

    while (!pq.empty()) {
        State cur = pq.top();
        pq.pop();

        int u = cur.u;
        if (vis[u]) continue;
        vis[u] = true;

        if (cur.h > D[u]) {
            return false;
        }

        for (const auto& e : adj[u]) {
            int v = e.to;
            if (vis[v]) continue;

            int nd = cur.d + e.weight + K;
            int nh = cur.h + 1;

            if (nd < dist_dijk[v] || (nd == dist_dijk[v] && nh < hops_dijk[v])) {
                dist_dijk[v] = nd;
                hops_dijk[v] = nh;
                pq.push({nd, nh, v});
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (hops_dijk[i] != D[i]) return false;
    }

    return true;
}

int32_t main() {
    fastio;

    if (!(cin >> n >> m)) return 0;

    for (int i = 0; i < m; ++i) {
        int u, v, c;
        cin >> u >> v >> c;
        adj[u].pb({v, c});
        adj[v].pb({u, c});
    }

    bfs();

    int low = 0, high = 2e9, ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << "\n";

    return 0;
}
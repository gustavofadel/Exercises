#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;

const int INF = 1e9 + 7;
const int MAXN = 100005;

struct NodeResult {
    bool helps_parent;
    int arrival_time;
    int deadline;
};

int n;
int s[MAXN];
int v[MAXN];
vi adj[MAXN];
int ans = 0;

NodeResult dfs(int u, int p) {
    vi helpers;
    int min_child_deadline = INF;

    for (int child : adj[u]) {
        if (child == p) continue;
        NodeResult res = dfs(child, u);
        if (res.helps_parent) {
            helpers.pb(res.arrival_time);
        } else {
            min_child_deadline = min(min_child_deadline, res.deadline);
        }
    }

    int l_u = min(v[u], min_child_deadline);
    sort(all(helpers));
    int m = (int)helpers.size();

    bool self_sufficient = false;
    int t_u = 0;

    if (m >= s[u]) {
        int arrival = helpers[s[u] - 1];
        if (arrival <= l_u) {
            self_sufficient = true;
            t_u = arrival;
        }
    }

    if (self_sufficient) {
        return {true, t_u + 1, -1};
    }

    bool can_use_parent = false;
    if (u != 1 && m >= s[u] - 1) {
        int child_max_time = (s[u] - 1 == 0) ? 0 : helpers[s[u] - 2];
        if (child_max_time <= l_u && l_u - 1 >= 0) {
            can_use_parent = true;
        }
    }

    if (can_use_parent) {
        return {false, -1, l_u - 1};
    }

    ans++;
    return {true, 1, -1};
}

int32_t main() {
    fastio;

    if (!(cin >> n)) return 0;

    for (int i = 1; i <= n; ++i) {
        cin >> s[i] >> v[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    dfs(1, 0);

    cout << ans << "\n";

    return 0;
}
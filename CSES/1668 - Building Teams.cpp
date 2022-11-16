# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

const int N = 1e5 + 10;

bool possible = true;
int color[N], m, n, u, v, vis[N];
vector<int> g[N];

void dfs (int u, int c = 0) {
    vis[u] = 1, color[u] = c;
    
    for (int v: g[u]) {
        if (!vis[v]) dfs(v, !c);
        else possible &= (color[v] != c);
    }
}

int main () {_
    cin >> n >> m;
    
    while (m--) {
        cin >> u >> v;
        g[u].push_back(v), g[v].push_back(u);
    }
    
    for (int i = 1; i <= n && possible; i++) {
        if (!vis[i]) dfs(i);
    }
    
    if (possible) for (int i = 1; i <= n; i++) cout << ++color[i] << " \n"[i == n];
    else cout << "IMPOSSIBLE\n";
}
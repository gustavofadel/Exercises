# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e3 + 10;

int m, n, t, u, v, vis[MAXN];
vector<int> adj[MAXN];

void bfs (int src) {
  queue<int> q;
  
  q.push(src), vis[src] = 1;
  
  while (!q.empty()) {
    int u = q.front(); q.pop();
    for (int v: adj[u]) if (!vis[v]) q.push(v), vis[v] = 1;
  }
}

int main () {_
  cin >> t;
  
  for (int tc = 1; tc <= t; tc++) {
    int cnt = 0;
    
    cin >> n >> m;
    
    for (int i = 0; i < MAXN; adj[i++].clear()); fill(vis, vis + MAXN, 0);
    
    while (m--) cin >> u >> v, adj[u].push_back(v), adj[v].push_back(u);
    
    bfs(1);
    
    for (int i = 1; i <= n; i++) if (!vis[i]) bfs(i), cnt++;
    
    cout << "Caso #" << tc << ":";
    if (!cnt) cout << " a promessa foi cumprida\n";
    else cout << " ainda falta(m) " << cnt << " estrada(s)\n";
  }
  
  return 0;
}
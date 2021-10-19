# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 30;

int adj[MAXN][MAXN], m, mark[MAXN], n, t, u, v, vis[MAXN];

void dfs (int u, int spaces) {
  vis[u] = 1;
  
  for (int v = 0; v < n; v++) {
    if (adj[u][v]) {
      for (int i = 0; i < spaces; cout << " ", i++);
      cout << u << "-" << v;
      if (!vis[v]) { cout << " pathR(G," << v << ")\n"; dfs(v, spaces + 2); }
      else cout << "\n";
    }
  }
}

int main () {_
  cin >> t;
  
  for (int tc = 1; tc <= t; tc++) {
    memset(adj, 0, sizeof(adj));
    fill(mark, mark + MAXN, 0); fill(vis, vis + MAXN, 0);
    cin >> n >> m;
    while (m--) { cin >> u >> v; adj[u][v] = mark[u] = 1; }
    cout << "Caso " << tc << ":\n";
    for (int i = 0; i < n; i++) {
      if (!vis[i] && mark[i]) { dfs(i, 2); cout << "\n"; }
    }
  }
  
  return 0;
}
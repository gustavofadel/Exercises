# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e2 + 10;

int adj[MAXN][MAXN], cnt, m, n, tc, u, v, vis[MAXN];

void dfs (int u) {
  cnt++, vis[u] = 1;
  for (int v = 1; v <= n; v++) if (!vis[v] && adj[u][v]) adj[u][v] = adj[v][u] = 0, dfs(v);
}

int main () {_
  while (cin >> n >> m && (n || m)) {
    cnt = 0, memset(adj, 0, sizeof(adj)), memset(vis, 0, sizeof(vis));
    while (m--) cin >> u >> v, adj[u][v] = adj[v][u] = 1;
    dfs(1), cout << "Teste " << ++tc << "\n" << (cnt == n ? "normal" : "falha") << "\n\n";
  }
  
  return 0;
}
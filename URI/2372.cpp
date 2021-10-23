# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int INF = 1e9 + 10;
const int MAXN = 1e2 + 10;

int adj[MAXN][MAXN], m, n, res = INF, u, v, w;

int main () {_
  cin >> n >> m;
  
  for (int i = 0; i < n; i++) for (int j = 0; j < n; adj[i][j++] = INF);
  
  for (int i = 0; i < n; adj[i][i] = 0, i++);
  
  while (m--) cin >> u >> v >> w, adj[u][v] = adj[v][u] = min(adj[u][v], w);
  
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
      }
    }
  }
  
  for (int i = 0; i < n; i++) {
    int cur = 0;
    for (int j = 0; j < n; cur = max(cur, adj[i][j++]));
    res = min(res, cur);
  }
  
  return cout << res << "\n", 0;
}
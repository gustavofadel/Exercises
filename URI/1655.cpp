# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e2 + 10;

int n, m, u, v, w;

int main () {_
  while (cin >> n && n) {
    double adj[MAXN][MAXN] = {{0}};
    
    cin >> m;
    
    while (m--) {
      cin >> u >> v >> w; adj[u][v] = adj[v][u] = 0.01 * w;
    }
    
    for (int k = 1; k <= n; k++) {
      for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
          adj[i][j] = max(adj[i][j], adj[i][k] * adj[k][j]);
        }
      }
    }
    
    cout << fixed << setprecision(6) << adj[1][n] * 100 << " percent\n";
  }
  
  return 0;
}
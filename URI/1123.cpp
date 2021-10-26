# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int INF = 1e9 + 10;
const int MAXN = 260;

int adj[MAXN][MAXN], c, dist[MAXN], k, m, n, u, v, w;

int main () {_
  while (cin >> n >> m >> c >> k && (n || m || c || k)) {
    queue<int> q;
    
    memset(adj, INF, sizeof(adj)), memset(dist, INF, sizeof(dist));
    
    while (m--) {
      cin >> u >> v >> w;
      if ((u >= c && v >= c) || (u < c && v < c && abs(u - v) == 1)) adj[u][v] = adj[v][u] = w;
      else if (u >= c && v < c) adj[u][v] = w;
      else if (u < c && v >= c) adj[v][u] = w;
    }
    
    dist[k] = 0, q.push(k);
    
    while (!q.empty()) {
      u = q.front(); q.pop();
      
      for (v = 0; v < n; v++) {
        if (adj[u][v] != INF && dist[v] > dist[u] + adj[u][v]) dist[v] = dist[u] + adj[u][v], q.push(v);
      }
    }
    
    cout << dist[c - 1] << "\n";
  } 
  
  return 0;
}
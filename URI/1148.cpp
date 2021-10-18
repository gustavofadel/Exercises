# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 5e2 + 10;

int adj[MAXN][MAXN], d, e, h, k, n, o, x, y;

int dijkstra (int o, int d) {
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  vector<int> dist(n + 1, INT_MAX);
  
  dist[o] = 0; pq.push({0, o});
  
  while (!pq.empty()) {
    int u = pq.top().second; pq.pop();
    
    for (int v = 1; v <= n; v++) {
      if (adj[u][v] != INT_MAX && dist[v] > dist[u] + adj[u][v]) {
        dist[v] = dist[u] + adj[u][v];
        pq.push({dist[v], v});
      }
    }
  }
  
  return dist[d];
}

int main () {_
  while (cin >> n >> e && (n || e)) {
    for (int i = 1; i <= n; i++) for (int j = 1; j <= n; adj[i][j++] = INT_MAX);
    
    while (e--) {
      cin >> x >> y >> h;
      if (adj[y][x] == INT_MAX) adj[x][y] = h;
      else adj[x][y] = adj[y][x] = 0;
    }
    
    cin >> k;
    
    while (k--) {
      cin >> o >> d;
      int res = dijkstra(o, d);
      if (res == INT_MAX) cout << "Nao e possivel entregar a carta\n";
      else cout << res << "\n";
    }
    
    cout << "\n";
  }
  
  return 0;
}
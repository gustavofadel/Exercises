# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int INF = 1e9 + 10;
const int MAXN = 1e4 + 10;

int n, m, u, v, w;
vector<pair<int, int>> adj[MAXN];

int dijkstra (int src, int dest) {
  pair<int, int> dist[MAXN];
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  
  for (int i = 1; i <= n; i++) dist[i] = {(i == 1 ? 0 : INF), INF};
  pq.push({0, 1});
  
  while (!pq.empty()) {
    auto [d, u] = pq.top(); pq.pop();
    
    if (d > dist[u].first && d > dist[u].second) continue;
    
    for (auto [v, w]: adj[u]) {
      if (dist[v].second > dist[u].first + w) {
        dist[v].second = dist[u].first + w; 
        pq.push({dist[v].second, v});
      }
      
      if (dist[v].first > dist[u].second + w) {
        dist[v].first = dist[u].second + w;
        pq.push({dist[v].first, v});
      }
    }
  }
  
  return (dist[dest].first == INF ? -1 : dist[dest].first);
}

int main () {_
  cin >> n >> m;
  
  while (m--) cin >> u >> v >> w, adj[u].push_back({v, w}), adj[v].push_back({u, w});
  
  cout << dijkstra(1, n) << "\n";
  
  return 0;
}
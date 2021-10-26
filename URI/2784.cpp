# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e3 + 10;

int highest = INT_MIN, lowest = INT_MAX, m, n, s, u, v, w;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
vector<int> dist(MAXN, INT_MAX);
vector<pair<int, int>> adj[MAXN];

int main () {_
  cin >> n >> m;
  
  while (m--) cin >> u >> v >> w, adj[u].push_back({v, w}), adj[v].push_back({u, w});
  
  cin >> s, dist[s] = 0, pq.push({dist[s], s});
  
  while (!pq.empty()) {
    auto [d, u] = pq.top(); pq.pop();
    
    if (dist[u] < d) continue;
    if (u != s) lowest = min(lowest, dist[u]), highest = max(highest, dist[u]);
    
    for (auto [v, w]: adj[u]) {
      if (dist[v] > dist[u] + w) dist[v] = dist[u] + w, pq.push({dist[v], v});
    }
  }
  
  return cout << highest - lowest << "\n", 0;
}
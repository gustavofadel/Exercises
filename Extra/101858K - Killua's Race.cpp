# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int INF = 1e9 + 10;
const int MAXN = 1e5 + 10;

int dist[MAXN][3], m, n, u, v, w;
priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
string names[3] = {"me", "Gon", "Killua"};
vector<pair<int, int>> adj[MAXN];
vector<pair<int, string>> res;

int main () {_
  cin >> n >> m;
  
  while (m--) cin >> u >> v >> w, adj[u].push_back({v, w}), adj[v].push_back({u, w});
  
  memset(dist, INF, sizeof(dist)), pq.push({0, {0, 1}});
  
  while (!pq.empty()) {
    int d = pq.top().first;
    auto [p, u] = pq.top().second;
    
    pq.pop();
    
    if (u == n) continue;
    
    for (auto [v, w]: adj[u]) {
      int np = (p + 1) % 3;
      if (dist[v][np] > d + w) dist[v][np] = d + w, pq.push({dist[v][np], {np, v}});
    }
  }
  
  for (int i = 0; i < 3; res.push_back({dist[n][i], names[i++]}));
  
  sort(res.begin(), res.end());
  
  for (int i = 0; i < 3; cout << res[i++].second << "\n");
  
  return 0;
}
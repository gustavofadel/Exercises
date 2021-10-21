# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e4 + 10;

int a, b, t;
vector<int> adj[MAXN];

int inverse (int x) {
  int res = 0;
  while (x) res = (res * 10) + (x % 10), x /= 10;
  return res;
}

int main () {_
  for (int i = 0; i < MAXN; i++) adj[i].push_back(i + 1), adj[i].push_back(inverse(i));
  
  cin >> t;
  
  while (t--) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(MAXN, INT_MAX);
    
    cin >> a >> b; dist[a] = 0, pq.push({0, a});
    
    while (!pq.empty()) {
      auto [d, u] = pq.top(); pq.pop();
      for (int v: adj[u]) if (v < MAXN - 1 && dist[v] > d + 1) dist[v] = d + 1, pq.push({dist[v], v});
    }
    
    cout << dist[b] << "\n";
  }
  
  return 0;
}
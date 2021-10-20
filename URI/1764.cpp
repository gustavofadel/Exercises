# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 4e4 + 10;

struct Edge {
  int u, v, w;
  bool operator < (Edge const& other) {
    return w < other.w;
  }
};

int m, n, parent[MAXN];

int find (int x) {
  if (x == parent[x]) return x;
  return parent[x] = find(parent[x]);
}

int main () {_
  while (cin >> n >> m && (n || m)) {
    int cost = 0;
    vector<Edge> edges(m);
      
    for (int i = 0; i < m; cin >> edges[i].u >> edges[i].v >> edges[i++].w);
      
    sort(edges.begin(), edges.end());
    iota(parent, parent + n, 0);
    
    for (auto [u, v, w]: edges) {
      int x = find(u), y = find(v);
      if (x != y) { parent[y] = parent[x]; cost += w; }
    }
    
    cout << cost << "\n";
  }
  
  return 0;
}
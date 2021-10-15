# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 2e5 + 10;

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
  while (cin >> m >> n && (m || n)) {
    int initial = 0, minimal = 0;
    vector<Edge> edges(n);
    
    for (int i = 0; i < n; cin >> edges[i].u >> edges[i].v >> edges[i].w, initial += edges[i++].w);
    
    sort(edges.begin(), edges.end());
    iota(parent, parent + m, 0);
    
    for (auto [u, v, w]: edges) {
      int x = find(u), y = find(v);
      if (x != y) { parent[y] = parent[x]; minimal += w; }
    }
    
    cout << initial - minimal << "\n";
  }
  
  return 0;
}
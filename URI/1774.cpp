# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXR = 70;

struct Edge {
  int u, v, w;
  bool operator < (Edge const& other) {
    return w < other.w;
  }
};

int c, cost, parent[MAXR], r;

int find (int x) {
  if (x == parent[x]) return x;
  return parent[x] = find(parent[x]);
}

int main () {_
  cin >> r >> c;
  
  vector<Edge> edges(c);
    
  for (int i = 0; i < c; cin >> edges[i].u >> edges[i].v >> edges[i++].w);
    
  sort(edges.begin(), edges.end());
  iota(parent + 1, parent + r + 1, 1);
  
  for (auto [u, v, w]: edges) {
    int x = find(u), y = find(v);
    if (x != y) { parent[y] = parent[x]; cost += w; }
  }
  
  cout << cost << "\n";
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define MAXM 760

struct Edge {
  double w;
  int u, v;
};

struct Point {
  double x, y;
};

int m, n, parent[MAXM];

double distance (double x1, double y1, double x2, double y2) {
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

bool comparison (Edge a, Edge b) {
  return a.w < b.w;
}

int find (int x) {
  if (parent[x] != x) {
    parent[x] = find(parent[x]);
  }
  
  return parent[x];
}

void join (int x, int y) {
  parent[find(x)] = find(y);
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  cin >> n;
  
  while (n--) {
    cin >> m;
    
    double total = 0.0;
    vector<Edge> edges;
    vector<Point> points(m);
    
    for (int i = 0; i < m; i++) {
      cin >> points[i].x >> points[i].y;
      parent[i] = i;
    }
    
    for (int i = 0; i < m; i++) {
      for (int j = i + 1; j < m; j++) {
        edges.push_back({distance(points[i].x, points[i].y, points[j].x, points[j].y), i, j});
      }
    }
    
    sort(edges.begin(), edges.end(), comparison);
    
    for (auto edge: edges) {
      if (find(edge.u) != find(edge.v)) {
        join(edge.u, edge.v);
        total += edge.w;
      }
    }
    
    cout << total << "\n";
  }
  
  return 0;
}
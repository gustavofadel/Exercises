# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e3 + 10;

int m, n, parent[MAXN], tree_size[MAXN], x, y;

int find (int x) {
  if (parent[x] == x) return x;
  return parent[x] = find(parent[x]);
}

void join (int x, int y) {
  x = find(x), y = find(y);
  
  if (x != y) {
    if (tree_size[x] < tree_size[y]) swap(x, y);
    parent[y] = x, tree_size[x] += tree_size[y];
  }
}

int main () {_
  while (cin >> n >> m) {
    fill(tree_size + 1, tree_size + n + 1, 1), iota(parent + 1, parent + n + 1, 1);
    while (m--) cin >> x >> y, join(x, y);
    cin >> x, cout << tree_size[find(x)] << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long ll;

const int MAXN = 2e5 + 10;

int a, b, n, q;
ll tree[MAXN << 2], x[MAXN];

void build (int node, int i, int j) {
  if (i == j) {
    tree[node] = x[i];
    return;
  }
  
  int mid = (i + j) >> 1;
  
  build(node << 1, i, mid);
  build(node << 1 | 1, mid + 1, j);
  
  tree[node] = tree[node << 1] + tree[node << 1 | 1];
}

ll query (int node, int i, int j, int a, int b) {
  if (i > b || j < a) return 0;
  if (a <= i && j <= b) return tree[node];
  
  int mid = (i + j) >> 1;
  
  return query(node << 1, i, mid, a, b) + query(node << 1 | 1, mid + 1, j, a, b);
}


int main () {_
  cin >> n >> q;
  
  for (int i = 0; i < n; cin >> x[i++]);
  
  build(1, 0, n - 1);
  
  while (q--) cin >> a >> b, cout << query(1, 0, n - 1, --a, --b) << "\n";
  
  return 0;
}
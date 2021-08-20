# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e5 + 10;

char op;
int a, b, k, n, parent[MAXN], rnk[MAXN];

int find (int x) {
  if (parent[x] == x) {
    return x;
  }
  
  return parent[x] = find(parent[x]);
}

int join (int x, int y) {
  x = find(x); y = find(y);
  
  if (x != y) {
    if (rnk[x] < rnk[y]) {
      swap(x, y);
    }
    
    parent[y] = x;
    
    if (rnk[x] == rnk[y]) {
      rnk[x]++;
    }
  }
}

int main () {_
  cin >> n >> k;
  
  for (int i = 1; i <= n; i++) {
    parent[i] = i; rnk[i] = 0;
  }
  
  while (k--) {
    cin >> op >> a >> b;
    
    if (op == 'F') {
      join(a, b);
    }
    
    else {
      cout << "NS"[find(a) == find(b)] << "\n";
    }
  }
  
  return 0;
}
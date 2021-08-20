# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e5 + 10;

int a, b, m, n, parent[MAXN], points[MAXN], q, r;

int find (int x) {
  if (parent[x] == x) {
    return x;
  }
  
  return parent[x] = find(parent[x]);
}

int join (int x, int y) {
  x = find(x); y = find(y);
  parent[x] = y; points[y] += points[x];
}

int main () {_
  while (cin >> n >> m && (n || m)) {
    int res = 0;
    
    for (int i = 1; i <= n; i++) {
      cin >> points[i]; parent[i] = i;
    }
    
    while (m--) {
      cin >> q >> a >> b;
      
      if (q == 1) {
        join(a, b);
      }
      
      else {
        a = find(a); b = find(b); r = find(1);
        res += ((r == a && points[a] > points[b]) || (r == b && points[b] > points[a]));
      }
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
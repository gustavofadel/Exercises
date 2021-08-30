# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e5 + 10;

int a[MAXN], n, op, q, x, y, z;

int main () {_
  cin >> n >> q;
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  while (q--) {
    cin >> op;
    
    if (op == 1) {
      cin >> x >> y >> z;
      
      for (int i = x - 1; i < y; i++) {
        a[i] += z;
      }
    }
    
    else {
      cin >> x >> y;
      
      int res = a[x - 1];
      
      for (int i = x; i < y; i++) {
        res = __gcd(res, a[i]);
      }
      
      cout << res << "\n";
    }
  }
  
  return 0;
}
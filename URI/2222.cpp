# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

const int MAXN = 1e4 + 10;

int m, n, op, q, t, x, y;
ll dp[MAXN];

int setBits (ll x) {
  int res = 0;
  while (x) { res += x & 1; x >>= 1; }
  return res;
}

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
      dp[i] = 0;
      cin >> m;
      while (m--) { cin >> x; dp[i] |= (1ll << x); } 
    }
    
    cin >> q;
    
    while (q--) { 
      cin >> op >> x >> y; 
      cout << (op == 1 ? setBits(dp[x] & dp[y]) : setBits(dp[x] | dp[y])) << "\n";
    }
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

ll i, j, n, p, q, r, res, s, x, y;

int main () {_
  cin >> n >> p >> q >> r >> s >> x >> y >> i >> j;
  
  for (ll k = 1; k <= n; k++) {
    res += ((p * i + q * k) % x) * ((r * k + s * j) % y);
  }
  
  cout << res << "\n";
  
  return 0;
}
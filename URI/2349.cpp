# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c, i, n, res, s, x;

int main () {_
  cin >> n >> c >> s; s--; res += (i == s);
  
  while (c--) {
    cin >> x; i = (x > 0 ? (i + 1) % n : (i + n - 1) % n); res += (i == s);
  }
  
  cout << res << "\n";
  
  return 0;
}
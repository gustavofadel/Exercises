# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n, res, s;

int main () {_
  cin >> n >> s; res = s;
  
  while (n--) {
    cin >> m; s += m; res = min(res, s);
  }
  
  return cout << res << "\n", 0;
}
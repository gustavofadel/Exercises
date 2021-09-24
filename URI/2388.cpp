# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, res, t, v;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> t >> v; res += v * t;
  }
  
  return cout << res << "\n", 0;
}
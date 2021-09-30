# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n, p, t;

int main () {_
  cin >> t;
  
  while (t--) {
    int cur = 0, res = 0;
    
    cin >> n >> m;
    
    while (n--) {
      cin >> p;
      if (cur + p > m) { cur = p; res++; }
      else if (cur + p == m) { cur = 0; res++; }
      else cur += p;
    }
    
    cout << res + (cur > 0) << "\n";
  }
  
  return 0;
}
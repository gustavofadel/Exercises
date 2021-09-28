# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c, m, n, t;

int main () {_
  cin >> t;
  
  while (t--) {
    int res = -1;
    map<int, int> mp;
    
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
      cin >> c; mp[c]++;
      
      if (mp[c] > 0.5 * m) {
        res = c;
      }
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
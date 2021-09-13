# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n, p;

int main () {_
  while (cin >> n >> m && (n || m)) {
    map<int, int> mp;
    int res = 0;
    
    for (int i = 0; i < n; cin >> p, mp[p]++, i++);
    
    for (auto [k, v]: mp) {
      res += (v >= m);
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n;

int main () {_
  while (cin >> n >> m && (n || m)) {
    int cnt = 0;
    map<int, int> mp;
    
    for (int i = 0, t; i < m; i++) {
      cin >> t; mp[t]++;
    }
    
    for (auto [k, v]: mp) {
      cnt += (v > 1);
    }
    
    cout << cnt << "\n";
  }
  
  return 0;
}
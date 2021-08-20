# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int k, m, n, v, x;

int main () {_
  while (cin >> n >> m) {
    map<int, vector<int>> mp;
    
    for (int i = 1; i <= n; i++) {
      cin >> x; mp[x].push_back(i);
    }
    
    while (m--) {
      cin >> k >> v; k--;
      cout << (k < mp[v].size() ? mp[v][k] : 0) << "\n";
    }
  }
  
  return 0;
}
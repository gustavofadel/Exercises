# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n;
string name, signature;

int main () {_
  while (cin >> n && n) {
    int res = 0;
    map<string, string> mp;
    
    while (n--) {
      cin >> name >> signature; mp[name] = signature;
    }
    
    cin >> m;
    
    while (m--) {
      int cnt = 0;
      
      cin >> name >> signature;
      
      for (int i = 0, j = 0; i < signature.size() && j < mp[name].size() && cnt < 2; i++, j++) {
        if (signature[i] != mp[name][j]) {
          cnt++;
        }
      }
      
      res += (cnt > 1);
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
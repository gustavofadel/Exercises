# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string s;

int main () {_
  cin >> t; cout << fixed << setprecision(4);
  
  for (int tc = 0; tc < t; tc++) {
    int cnt = 0;
    map<string, int> mp;
    
    if (tc) {
      cout << "\n";
    }
    
    cin >> ws;
    
    while (getline(cin, s) && !s.empty()) {
      cnt++; mp[s]++;
    }
    
    for (auto [k, v]: mp) {
      cout << k << " " << (float) mp[k] / cnt * 100 << "\n";
    }
  }
  
  return 0;
}
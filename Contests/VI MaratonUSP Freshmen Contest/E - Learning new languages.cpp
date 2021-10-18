# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int k, m, n, ok = 1, res;
map<string, int> knows;
map<string, vector<string>> definition;
string s, t;

int main () {_
  cin >> n;
  
  while (n--) { cin >> s; knows[s] = 1; }
  
  cin >> m;
  
  while (m--) {
    cin >> s >> k;
    while (k--) { cin >> t; definition[s].push_back(t); }
  }
  
  while (ok) {
    ok = 0;
    for (auto [k, v]: definition) {
      int cnt = 0;
      if (knows[k]) continue;
      for (string s: v) cnt += knows[s];
      if (cnt == v.size()) knows[k] = ok = 1;
    }
  }
  
  for (auto [k, v]: knows) res += v;
  
  return cout << res << "\n", 0;
}
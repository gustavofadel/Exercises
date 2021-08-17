# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int cnt, n;

int main () {_
  while (cin >> n) {
    vector<string> s(n); cnt = 0;
    
    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }
    
    sort(s.begin(), s.end());
    
    for (int i = 1; i < n; i++) {
      for (int j = 0; j < s[i].size() && s[i][j] == s[i - 1][j]; cnt++, j++);
    }
    
    cout << cnt << "\n";
  }
  
  return 0;
}
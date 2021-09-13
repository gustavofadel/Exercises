# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n;

int main () {_
  while (cin >> n >> m) {
    int cnt = 0;
    
    for (int i = n; i <= m; i++) {
      string s = to_string(i); set<int> st(s.begin(), s.end());
      cnt += (st.size() == s.size());
    }
    
    cout << cnt << "\n";
  }
  
  return 0;
}
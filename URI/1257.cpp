# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;
string s;

int main () {_
  cin >> t;
  
  while (t--) {
    int res = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
      cin >> s;
      
      for (int j = 0; j < s.size(); j++) {
        res += (s[j] - 'A') + i + j;
      }
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
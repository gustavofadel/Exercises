# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int q, t;
string r, s;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> s >> q;
    
    while (q--) {
      int i = 0, j = 0;
      
      cin >> r;
      
      while (i < s.size() && j < r.size()) {
        if (s[i++] == r[j]) {
          j++;
        }
      }
      
      cout << (j == r.size() ? "Yes" : "No") << "\n";
    }
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int p;
string s;

int main () {_
  while (cin >> s >> p) {
    int cur = 0, res = 0;
    
    for (char c: s) {
      if (c == 'W') {
        res += 1 + (cur > 0); cur = 0;
      }
      
      else {
        cur++;
        
        if (cur == p) {
          res++; cur = 0;
        }
      }
    } 
    
    cout << res + (cur > 0) << "\n";
  }
  
  return 0;
}
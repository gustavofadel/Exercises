# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, n, t;
string s;

int main () {_
  while (cin >> n && n) {
    int first = 2115;
    string res;
    
    while (n--) {
      cin >> s >> a >> t;
      
      if (a - t < first) {
        first = a - t; res = s;
      }
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
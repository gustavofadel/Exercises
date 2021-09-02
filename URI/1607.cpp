# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string a, b;

int main () {_
  cin >> t;
  
  while (t--) {
    int res = 0;
    
    cin >> a >> b;
    
    for (int i = 0; i < a.size(); i++) {
      if (a[i] <= b[i]) {
        res += (b[i] - a[i]);
      }
      
      else {
        res += ('z' - a[i]) + (b[i] - 'a' + 1);
      }
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
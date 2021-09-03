# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int b, e, t;

int main () {_
  cin >> t;
  
  while (t--) {
    string s = "";
    
    cin >> b >> e;
    
    for (int i = b; i <= e; i++) {
      s += to_string(i);
    }
    
    cout << s;
    
    for (int i = s.size() - 1; i >= 0; i--) {
      cout << s[i];
    }
    
    cout << "\n";
  }
  
  return 0;
}
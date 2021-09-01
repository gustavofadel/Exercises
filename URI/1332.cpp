# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string s;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> s;
    
    if (s.size() == 5) {
      cout << "3\n";
    }
    
    else if ((s[0] == 't' && s[1] == 'w') || (s[0] == 't' && s[2] == 'o') || (s[1] == 'w' && s[2] == 'o')) {
      cout << "2\n";
    }
    
    else {
      cout << "1\n";
    }
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string s;

int main () {_
  cin >> t; cin.ignore();
  
  while (t--) {
    getline(cin, s);
    
    for (int i = s.size() / 2 - 1; i >= 0; i--) {
      cout << s[i];
    }
    
    for (int i = s.size() - 1; i >= s.size() / 2; i--) {
      cout << s[i];
    }
    
    cout << "\n";
  }
  
  return 0;
}
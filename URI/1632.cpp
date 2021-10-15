# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool is_special (char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 's'; }

int t;
string s;

int main () {_
  cin >> t;
  
  while (t--) {
    int res = 1;
    
    cin >> s;
    
    for (char c: s) res *= (is_special(tolower(c)) ? 3 : 2);
    
    cout << res << "\n";
  }
  
  return 0;
}
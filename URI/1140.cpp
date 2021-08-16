# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool res, space;
string s;

int main () {_
  while (getline(cin, s) && s != "*") {
    res = space = true;
    
    for (int i = 0; i < s.size(); i++) {
      if (space && tolower(s[i]) != tolower(s[0])) {
        res = false;
        break;
      }
      
      space = (s[i] == ' ');
    }
    
    cout << "NY"[res] << "\n";
  }
  
  return 0;
}
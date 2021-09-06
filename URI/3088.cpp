# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s;

int main () {_
  while (getline(cin, s)) {
    for (int i = 0; i < s.size(); i++) {
      if (!(i < s.size() - 1 && s[i] == ' ' && (s[i + 1] == ',' || s[i + 1] == '.'))) {
        cout << s[i];
      }
    }
    
    cout << "\n";
  }
  
  return 0;
}
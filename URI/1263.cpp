# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s;

int main () {_
  while (getline(cin, s)) {
    bool space = true;
    int cnt = 0, res = 0;
    string letters = "";
    
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == ' ') {
        space = true;
      }
      
      else if (space) {
        letters += tolower(s[i]); space = false;
      }
    }
    
    for (int i = 1; i < letters.size(); i++) {
      if (letters[i] == letters[i - 1]) {
        cnt++;
      }
      
      else {
        cnt = 0;
      }
      
      res += (cnt == 1);
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
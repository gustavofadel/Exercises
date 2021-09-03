# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s;

int main () {_
  while (getline(cin, s)) {
    bool has_digit = false, has_upper = false, has_lower = false, valid = true;
    
    if (6 <= s.size() && s.size() <= 32) {
      for (int i = 0; i < s.size() && valid; i++) {
        if (isdigit(s[i])) {
          has_digit = true;
        }
        
        else if (isupper(s[i])) {
          has_upper = true;
        }
        
        else if (islower(s[i])) {
          has_lower = true;
        }
        
        else {
          valid = false;
        }
      }
      
      if (!has_digit || !has_upper || !has_lower) {
        valid = false;
      }
    }
    
    else {
      valid = false;
    }
    
    cout << (valid ? "Senha valida." : "Senha invalida.") << "\n";
  }
  
  return 0;
}
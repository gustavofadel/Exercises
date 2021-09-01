# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s;

int main () {_
  while (getline(cin, s)) {
    bool upper = true;
    
    for (char c: s) {
      if (isalpha(c)) {
        cout << (char) (upper ? toupper(c) : tolower(c)); upper ^= 1;
      }
      
      else {
        cout << c;
      }
    }
    
    cout << "\n";
  }
  
  return 0;
}
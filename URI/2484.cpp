# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s;

int main () {_
  while (cin >> s) {
    int spaces = 0;
    
    while (spaces < s.size()) {
      for (int i = 0; i < spaces; cout << " ", i++);
      
      for (int i = 0; i < s.size() - spaces; i++) {
        if (i) {
          cout << " ";
        }
        
        cout << s[i];
      }
      
      cout << "\n"; spaces++;
    }
    
    cout << "\n";
  }
  
  return 0;
}
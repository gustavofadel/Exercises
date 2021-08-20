# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

set<string> st;
string line;

int main () {_
  while (getline(cin, line)) {
    string s = "";
    
    for (int i = 0; i < line.size(); i++) {
      if (isalpha(line[i])) {
        s += tolower(line[i]);
      }
      
      else {
        if (s.size()) {
          st.insert(s); s = "";
        }
      }
    }
    
    if (s.size()) {
      st.insert(s);
    }
  }
  
  for (auto word: st) {
    cout << word << "\n";
  }
  
  return 0;
}
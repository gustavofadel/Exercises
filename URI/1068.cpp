# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string res, s;

int main () {_
  while (cin >> s) {
    stack<char> st;
    
    res = "correct";
    
    for (char ch: s) {
      if (ch == '(') {
        st.push(ch);
      }
      
      else if (ch == ')') {
        if (!st.empty()) {
          st.pop();
        }
        
        else {
          res = "incorrect";
          break;
        }
      }
    }
    
    if (!st.empty()) {
      res = "incorrect";
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
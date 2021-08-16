# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int res, t;
string s;

int main () {_
  cin >> t;
  
  while (t--) {
    stack<char> st;
    
    cin >> s; res = 0;
    
    for (char ch: s) {
      if (ch == '<') {
        st.push(ch);
      }
      
      else if (ch == '>') {
        if (!st.empty()) {
          res++; st.pop();
        }
      }
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
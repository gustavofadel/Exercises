# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s;

int main () {_
  while (getline(cin, s)) {
    stack<char> st1, st2;
    
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '_') {
        if (!st1.empty() && st1.top() == '_') {
          cout << "</i>"; st1.pop();
        }
        
        else {
          cout << "<i>"; st1.push(s[i]);
        }
      }
      
      else if (s[i] == '*') {
        if (!st2.empty() && st2.top() == '*') {
          cout << "</b>"; st2.pop();
        }
        
        else {
          cout << "<b>"; st2.push(s[i]);
        }
      }
      
      else {
        cout << s[i];
      }
    }
    
    cout << "\n";
  }
  
  return 0;
}
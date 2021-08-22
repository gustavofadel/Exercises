# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;

int main () {_
  while (cin >> n && n) {
    bool flag = false;
    
    while (true) {
      bool possible = true;
      int cur = n;
      stack<int> a, st;
      
      for (int i = 0, x; i < n; i++) {
        cin >> x; a.push(x);
        
        if (x == 0) {
          flag = true; break;
        }
      }
      
      if (flag) {
        break;
      }
      
      while (true) {
        if (cur == 0) {
          break;
        }
        
        else if (!a.empty() && a.top() == cur) {
          a.pop(); cur--;
        }
        
        else if (!st.empty() && st.top() == cur) {
          st.pop(); cur--;
        }
        
        else if ((!a.empty() && st.empty()) || (!a.empty() && !st.empty() && a.top() > st.top())) {
          st.push(a.top()); a.pop();
        }
        
        else {
          possible = false; break;
        }
      }
      
      cout << (possible ? "Yes" : "No") << "\n";
    }
    
    cout << "\n";
  }
  
  return 0;
}
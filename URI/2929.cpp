# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t, x;
stack<pair<int, int>> st;
string op;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> op;
    
    if (op == "PUSH") {
      cin >> x; int mn = st.empty() ? x : min(x, st.top().second); st.push({x, mn});
    }
    
    else if (op == "POP") {
      if (st.empty()) {
        cout << "EMPTY\n";
      }
      
      else {
        st.pop();
      }
    }
    
    else {
      if (st.empty()) {
        cout << "EMPTY\n";
      }
      
      else {
        cout << st.top().second << "\n";
      }
    }
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;

int main () {_
  cin >> t;
  
  while (t--) {
    set<int> st;
    
    cin >> n;
    
    for (int i = 0, x; i < n; cin >> x, st.insert(x), i++);
    
    cout << st.size() << "\n";
  }
  
  return 0;
}
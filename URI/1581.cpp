# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;
string s;

int main () {_
  cin >> t;
  
  while (t--) {
    set<string> st;
    
    cin >> n;
    
    while (n--) {
      cin >> s; st.insert(s);
    }
    
    cout << (st.size() == 1 ? *st.begin() : "ingles") << "\n";
  }
  
  return 0;
}
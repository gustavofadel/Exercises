# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;
string s1, s2;

int main () {_
  cin >> t;
  
  while (t--) {
    set<string> st;
    
    cin >> n;
    
    while (n--) {
      cin >> s1 >> s2;
      
      if (s2 == "chirrin") {
        st.insert(s1);
      }
      
      else if (s2 == "chirrion") {
        st.erase(s1);
      }
    }
    
    cout << "TOTAL\n";
    
    for (string s: st) {
      cout << s << "\n";
    }
  }
  
  return 0;
}
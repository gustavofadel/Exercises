# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string s;

int main () {_
  cin >> t; cin.ignore();
  
  while (t--) {
    set<char> st;
    
    getline(cin, s);
    
    for (char c: s) {
      if (isalpha(c)) {
        st.insert(c);
      }
    }
    
    cout << (st.size() == 26 ? "frase completa" : (st.size() >= 13 ? "frase quase completa" : "frase mal elaborada")) << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int bad, good, n;
set<string> st;
string c, s;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> c >> s; (c == "+" ? good : bad)++; st.insert(s);
  }
  
  for (string s: st) {
    cout << s << "\n";
  }
  
  return cout << "Se comportaram: " << good << " | Nao se comportaram: " << bad << "\n", 0;
}
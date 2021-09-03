# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;
set<string> st;
string s;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> s; st.insert(s);
  }
  
  cout << "Falta(m) " << 151 - st.size() << " pomekon(s).\n";
  
  return 0;
}
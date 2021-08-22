# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string a, b;

bool ends_with (string s1, string s2) {
  if (s2.size() > s1.size()) {
    return false;
  }
  
  return equal(s2.rbegin(), s2.rend(), s1.rbegin());
}

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> a >> b; cout << (ends_with(a, b) ? "encaixa" : "nao encaixa") << "\n";
  }
  
  return 0;
}
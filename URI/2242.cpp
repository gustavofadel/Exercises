# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s, s1, s2;

int main () {_
  cin >> s;
  
  for (char c: s) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      s1 += c; s2 += c;
    }
  }
  
  reverse(s2.begin(), s2.end());
  
  cout << (s1 == s2 ? "S" : "N") << "\n";
  
  return 0;
}
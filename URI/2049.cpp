# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int tc;
string s1, s2;

int main () {_
  while (cin >> s1 && s1 != "0") {
    if (tc) {
      cout << "\n";
    }
    
    cin >> s2; cout << "Instancia " << ++tc << "\n";
    cout << (s2.find(s1) != string::npos ? "verdadeira" : "falsa") << "\n";
  }
  
  return 0;
}
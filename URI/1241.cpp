# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string s1, s2;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> s1 >> s2;
    
    if (s2.size() > s1.size()) {
      cout << "nao encaixa\n";
    }
    
    else {
      cout << (equal(s2.rbegin(), s2.rend(), s1.rbegin()) ? "encaixa" : "nao encaixa") << "\n";
    }
  }
  
  return 0;
}
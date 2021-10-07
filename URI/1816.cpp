# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, tc, x;
string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main () {_
  while (cin >> m && m) {
    string cur = alphabet;
    
    cout << "Instancia " << ++tc << "\n";
    
    while (m--) {
      cin >> x; cout << cur[--x];
      string nxt; nxt += cur[x]; cur.erase(cur.begin() + x); nxt += cur; cur = nxt;
    }
    
    cout << "\n\n";
  }
  
  return 0;
}
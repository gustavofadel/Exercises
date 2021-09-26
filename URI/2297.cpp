# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int r, tc, x, y;

int main () {_
  while (cin >> r && r) {
    int a = 0, b = 0;
    
    while (r--) {
      cin >> x >> y; a += x; b += y;
    }
    
    cout << "Teste " << ++tc << "\n" << (a > b ? "Aldo" : "Beto") << "\n\n";
  }
  
  return 0;
}
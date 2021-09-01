# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, x, y, m;

int main () {_
  while (cin >> x >> y >> m) {
    while (m--) {
      cin >> a >> b; cout << ((a <= x && b <= y) || (a <= y && b <= x) ? "Sim" : "Nao") << "\n";
    }
  }
  
  return 0;
}
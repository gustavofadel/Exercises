# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int xa, xb, ya, yb;

int main () {_
  while (cin >> xa >> ya >> xb >> yb && (xa || ya || xb || yb)) {
    int x = abs(xa - xb), y = abs(ya - yb);
    if (xa == xb && ya == yb) cout << 0 << "\n";
    else if (xa == xb || ya == yb || x == y) cout << 1 << "\n";
    else cout << 2 << "\n";
  }
  
  return 0;
}
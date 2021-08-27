# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int l, r, tc, w;

int main () {_
  while (cin >> r >> w >> l && r) {
    cout << "Pizza " << ++tc << " ";
    cout << (w * w + l * l <= 4 * r * r ? "fits" : "does not fit");
    cout << " on the table.\n";
  }
  
  return 0;
}
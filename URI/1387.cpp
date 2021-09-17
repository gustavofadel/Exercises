# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int l, r;

int main () {_
  while (cin >> l >> r && (l || r)) {
    cout << l + r << "\n";
  }

  return 0;
}
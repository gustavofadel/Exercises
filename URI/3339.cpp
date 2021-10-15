# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int l, q, r;

int main () {_
  cin >> q;
  
  while (q--) { cin >> l >> r; cout << floor(sqrt(r)) - ceil(sqrt(l)) + 1 << "\n"; }
  
  return 0;
}
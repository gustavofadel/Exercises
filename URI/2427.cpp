# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int l, res = 4;

int main () {_
  cin >> l;
  
  while (l >> 1 >= 2) {
    l >>= 1; res <<= 2;
  }
  
  cout << res << "\n";
  
  return 0;
}
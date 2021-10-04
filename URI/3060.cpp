# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int p, q, r, v;

int main () {_
  cin >> v >> p; q = floor(v / p); r = v % p;
  for (int i = 0; i < r; cout << q + 1 << "\n", i++);
  for (int i = 0; i < p - r; cout << q << "\n", i++);
  
  return 0;
}
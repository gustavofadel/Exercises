# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c1, c2, p1, p2;

int main () {_
  cin >> p1 >> c1 >> p2 >> c2; cout << (p1 * c1 < p2 * c2 ? 1 : (p1 * c1 == p2 * c2 ? 0 : -1)) << "\n";

  return 0;
}
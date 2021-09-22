# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int x, y;

int main () {_
  cin >> x >> y; return cout << (0 <= x && x <= 432 && 0 <= y && y <= 468 ? "dentro" : "fora") << "\n", 0;
}
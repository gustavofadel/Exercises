# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, c, x, y, z;

int main () {_
  cin >> a >> b >> c >> x >> y >> z;
  return cout << (x / a) * (y / b) * (z / c) << "\n", 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int x, y;

int main () {_
  while (cin >> x >> y) {
    int g = __gcd(x, y);
    cout << 2 * x / g + 2 * y / g << "\n";
  }
  
  return 0;
}
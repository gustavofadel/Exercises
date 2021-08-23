# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, x, y;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> x >> y; cout << x * y / 2 << " cm2\n";
  }
  
  return 0;
}
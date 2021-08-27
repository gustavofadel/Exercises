# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, c, d;

int main () {_
  cout << fixed << setprecision(5);

  while (cin >> a >> b >> c >> d && (a || b || c || d)) {
    cout << ((a / 2.0) + b) * c / d << "\n";
  }
  
  return 0;
}
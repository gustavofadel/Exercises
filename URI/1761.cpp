# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

double a, b, c;

int main () {_
  cout << fixed << setprecision(2);

  while (cin >> a >> b >> c) {
    cout << 5 * (b * tan(a * M_PI / 180) + c) << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, c, t;

int main () {_
  cin >> t; cout << fixed << setprecision(2);
  
  while (t--) {
    cin >> a >> b >> c;
    float delta = b * b - 4 * a * c;
    cout << -delta / (4 * a) << "\n";
  }
  
  return 0;
}
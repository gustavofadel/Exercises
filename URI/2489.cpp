# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

double a, d, r;

int main () {_
  cout << fixed << setprecision(4);
  
  while (cin >> a >> d >> r) {
    cout << d * tan((r - 90) * M_PI / 180) + a << "\n";
  }
  
  return 0;
}
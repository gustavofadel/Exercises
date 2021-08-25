# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;

int main () {_
  cin >> t; cout << fixed << setprecision(3);
  
  while (t--) {
    cin >> n; cout << 1.0 / 4 * sqrt(5 * (5 + 2 * sqrt(5))) * n * n << "\n";
  }
  
  return 0;
}
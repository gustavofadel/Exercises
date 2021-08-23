# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int l;

int main () {_
  cout << fixed << setprecision(2);
  
  while (cin >> l) {
    cout << 2 * sqrt(3) / 5.0 * l * l << "\n";
  }
  
  return 0;
}
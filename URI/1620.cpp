# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

double l;

int main () {_
  cout << fixed << setprecision(6);

  while (cin >> l && l) {
    cout << ((l + (l - 3)) - l) / l << "\n";
  }
  
  return 0;
}
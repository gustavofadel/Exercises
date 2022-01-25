# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

double f1, f2;

int main () {_
  cin >> f1 >> f2;
  
  return cout << fixed << setprecision(6) << ((1 + f1 / 100) * (1 + f2 / 100) - 1) * 100 << "\n", 0;
}
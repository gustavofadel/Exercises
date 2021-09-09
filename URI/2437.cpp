# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int xm, xr, ym, yr;

int main () {_
  cin >> xm >> ym >> xr >> yr; cout << abs(xm - xr) + abs(ym - yr) << "\n";
  
  return 0;
}
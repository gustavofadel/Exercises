# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

float a, g, ra, rg;

int main () {_
  cin >> a >> g >> ra >> rg; cout << (g / rg <= a / ra ? "G" : "A") << "\n";
  
  return 0;
}
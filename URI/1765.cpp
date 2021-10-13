# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

double a, b;
int q, t;

int main () {_
  while (cin >> t && t) {
    for (int i = 1; i <= t; i++) {
      cin >> q >> a >> b; cout << "Size #" << i << ":\n";
      cout << fixed << setprecision(2) << "Ice Cream Used: " << (a + b) * 5 / 2 * q << " cm2\n";
    }
    
    cout << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int f1, f2, t;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> f1 >> f2; cout << __gcd(f1, f2) << "\n";
  }
  
  return 0;
}
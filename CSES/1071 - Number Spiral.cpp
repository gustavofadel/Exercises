# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

int bigger, t, x, y;
ll number;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> y >> x;
    
    bigger = max(x, y);
    number = (bigger - 1) * 1ll * (bigger - 1);
    number += (bigger & 1 ? x + (bigger - y) : y + (bigger - x));
    
    cout << number << "\n";
  }
  
  return 0;
}
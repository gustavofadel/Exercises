# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;

int main () {_
  while (cin >> n) {
    int x1 = 0, x2 = 0;
    
    for (int i = 1; i <= n; i++) {
      x1 ^= i;
    }
    
    for (int i = 0, x; i < n - 1; i++) {
      cin >> x; x2 ^= x;
    }
    
    cout << (x1 ^ x2) << "\n";
  }
  
  return 0;
}
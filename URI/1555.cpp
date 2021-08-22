# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t, x, y;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> x >> y;
    
    int r = 9 * x * x + y * y, b = 2 * x * x + 25 * y * y, c = -100 * x + y * y * y;
    
    if (b > c && b > r) {
      cout << "Beto ganhou\n";
    }
    
    else if (c > b && c > r) {
      cout << "Carlos ganhou\n";
    }
    
    else {
      cout << "Rafael ganhou\n";
    }
  }
  
  return 0;
}
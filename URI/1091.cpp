# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int k, m, n, x, y;

int main () {_
  while (cin >> k && k) {
    cin >> n >> m;
    
    while (k--) {
      cin >> x >> y;
      
      if (x > n && y > m) {
        cout << "NE\n";
      }
      
      else if (x < n && y > m) {
        cout << "NO\n";
      }
      
      else if (x < n && y < m) {
        cout << "SO\n";
      }
      
      else if (x > n && y < m) {
        cout << "SE\n";
      }
      
      else {
        cout << "divisa\n";
      }
    }
  }

  return 0;
}
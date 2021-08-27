# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool first = true, possible;
int n, x, xm, y, ym, t;

int main () {_
  cin >> xm >> ym >> n;
  
  for (int i = 1; i <= n; i++) {
    cin >> x >> y >> t;
    
    if (hypot(x - xm, y - ym) < t) {
      if (!first) {
        cout << " ";
      }
      
      first = false; possible = true; cout << i;
    }
  }
  
  if (!possible) {
    cout << -1;
  }
  
  cout << "\n";
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

float dist, min_dist;
int n, res, t, x, xb, y, yb;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> n >> xb >> yb;
    
    for (int i = 1; i <= n; i++) {
      cin >> x >> y; dist = sqrt((x - xb) * (x - xb) + (y - yb) * (y - yb));
      
      if (i == 1 || dist < min_dist) {
        min_dist = dist; res = i;
      }
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
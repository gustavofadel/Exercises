# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int h1, m1, h2, m2, res;

int main () {_
  while (cin >> h1 >> m1 >> h2 >> m2 && (h1 || m1 || h2 || m2)) {
    if (h1 < h2) {
      res = (60 - m1) + 60 * (h2 - h1 - 1) + m2;
    }
    
    else if (h1 == h2) {
      res = (m1 < m2 ? m2 - m1 : 1440 - (m1 - m2));
    }
    
    else {
      res = 60 * (23 - h1) + (60 - m1) + 60 * h2 + m2;
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
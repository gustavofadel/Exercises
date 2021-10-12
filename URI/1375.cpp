# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e3 + 10;

int c, n, p, pos[MAXN];

int main () {_
  while (cin >> n && n) {
    int possible = 1;
    
    fill(pos, pos + MAXN, 0);
    
    for (int i = 0; i < n; i++) {
      cin >> c >> p;
      if (possible && 0 <= i + p && i + p < n && !pos[i + p]) pos[i + p] = c;
      else possible = 0;
    }
    
    if (possible) {
      for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << pos[i];
      }
      
      cout << "\n";
    }
    
    else cout << -1 << "\n";
  }
  
  return 0;
}
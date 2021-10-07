# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e3 + 10;

int c, l, m, mat[MAXN][MAXN], n, res;

int main () {_
  cin >> l >> c >> m >> n;
  
  for (int i = 1; i <= l; i++) {
    for (int j = 1; j <= c; j++) {
      cin >> mat[i][j];
    }
  }
  
  for (int i = 1; i <= l; i += m) {
    for (int j = 1; j <= c; j += n) {
      int cur = 0;
      
      for (int x = i; x < i + m; x++) {
        for (int y = j; y < j + n; y++) {
          cur += mat[x][y];
        }
      }
      
      res = max(res, cur);
    }
  }
  
  return cout << res << "\n", 0;
}
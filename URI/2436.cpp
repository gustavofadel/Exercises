# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e3 + 10;

bool found = true;
int m, mat[MAXN][MAXN], n, x, y;

int main () {_
  cin >> n >> m >> x >> y;
  
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> mat[i][j];
    }
  }
  
  while (found) {
    found = false;
    
    for (int i = -1; i <= 1 && !found; i++) {
      if (i == 0) {
        for (int j = -1; j <= 1; j += 2) {
          if (mat[x + i][y + j]) {
            found = true; mat[x][y] = 0; x += i; y += j;
          }
        }
      }
      
      else {
        if (mat[x + i][y + !i]) {
          found = true; mat[x][y] = 0; x += i; y += !i;
        }
      }
    }
  }
  
  return cout << x << " " << y << "\n", 0;
}
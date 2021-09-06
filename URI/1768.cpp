# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;

int main () {_
  while (cin >> n) {
    int mat[n + 2][n + 2];
    
    memset(mat, 0, sizeof(mat));
    
    for (int i = 0; i <= n / 2; i++) {
      for (int j = n / 2 - i; j <= n / 2 + i; j++) {
        mat[i][j] = 1;
      }
    }
    
    mat[n / 2 + 1][n / 2] = mat[n / 2 + 2][n / 2 - 1] = mat[n / 2 + 2][n / 2] = mat[n / 2 + 2][n / 2 + 1] = 1;
    
    for (int i = 0; i <= n / 2 + 2; i++) {
      bool flag = false;
      
      for (int j = 0; j < n; j++) {
        cout << (mat[i][j] ? "*" : " "); flag = (mat[i][j] != 0);
        
        if (flag && !mat[i][j + 1]) {
          break;
        }
      }
      
      cout << "\n";
    }
    
    cout << "\n";
  }
  
  return 0;
}
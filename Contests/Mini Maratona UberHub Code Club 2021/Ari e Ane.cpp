# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main () {_
  int n, m, t;
  
  cin >> n >> m >> t;
  
  int matrix[n][m];
  
  while (t--) {
    int ari = 0, ane = 0;
    
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> matrix[i][j];
        (matrix[i][j] ? ane : ari)++;
      }
    }
    
    cout << (ari > ane ? "Ari venceu" : (ari == ane ? "Empate" : "Ane venceu")) << "\n";
  }
  
  return 0;
}
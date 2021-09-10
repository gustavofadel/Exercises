# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e2 + 10;

int m, mat[MAXN][MAXN], n;

int main () {_
  while (cin >> m >> n) {
    int sum = 0;
    
    for (int i = 0; i < m; i++) for (int j = 0; j < n; cin >> mat[i][j], sum += mat[i][j], j++);
    
    cout << sum / 60 << " saca(s) e " << sum % 60 << " litro(s)\n";
  }
  
  return 0;
}
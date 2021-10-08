# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 5e2 + 10;

char mat[MAXN][MAXN];
int m, n, pos;

void chuva (int i, int j) {
  mat[i][j] = 'o';
  if (i == n - 1) return;
  if (mat[i + 1][j] == '.') chuva(i + 1, j);
  if (mat[i + 1][j] == '#') {
    if (mat[i][j - 1] == '.') chuva(i, j - 1);
    if (mat[i][j + 1] == '.') chuva(i, j + 1);
  }
}

int main () {_
  cin >> n >> m;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mat[i][j];
      if (mat[i][j] == 'o') pos = j;
    }
  }
  
  chuva(0, pos);
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; cout << mat[i][j++]);
    cout << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e3 + 10;

int m, n, t[MAXN][MAXN];
vector<pair<int, int>> vet;

int main () {_
  cin >> n >> m;
  
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> t[i][j];
      
      if (t[i][j] == 42) {
        vet.push_back({i, j});
      }
    }
  }
  
  for (auto p: vet) {
    bool flag = true;
    
    for (int i = -1; i <= 1 && flag; i++) {
      for (int j = -1; j <= 1 && flag; j++) {
        if (i || j) {
          if (t[p.first + i][p.second + j] != 7) {
            flag = false;
          }
        }
      }
    }
    
    if (flag) {
      return cout << p.first << " " << p.second << "\n", 0;
    }
  }
  
  return cout << "0 0\n", 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define MAXN 1010

bool visited[MAXN][MAXN];
int grid[MAXN][MAXN], m, n;
queue<pair<int, int>> q;
vector<pair<int, int>> positions[MAXN * MAXN];

int main () {_
  cin >> m >> n;
  
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> grid[i][j];
      positions[grid[i][j]].push_back({i, j});
    }
  }
  
  q.push({m, n});
  visited[m][n] = true;
  
  while (!q.empty()) {
    int xa = q.front().first, ya = q.front().second; q.pop();
    
    for (auto jump: positions[xa * ya]) {
      int xb = jump.first, yb = jump.second;
      
      if (xb == yb && yb == 1) {
        cout << "yes\n";
        return 0;
      }
      
      if (!visited[xb][yb]) {
        q.push({xb, yb});
        visited[xb][yb] = true;
      }
    }
  }
  
  cout << "no\n";
  
  return 0;
}
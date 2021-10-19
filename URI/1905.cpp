# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int mat[5][5], t, vis[5][5];
pair<int, int> dir[4] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

void dfs (int x, int y) {
  if (0 <= x && x < 5 && 0 <= y && y < 5 && !mat[x][y] && !vis[x][y]) {
    vis[x][y] = 1;
    for (auto [nx, ny]: dir) dfs(x + nx, y + ny);
  }
}

int main () {_
  cin >> t;
  
  while (t--) {
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < 5; i++) for (int j = 0; j < 5; cin >> mat[i][j++]);
    dfs(0, 0);
    cout << (vis[4][4] ? "COPS" : "ROBBERS") << "\n";
  }
  
  return 0;
}
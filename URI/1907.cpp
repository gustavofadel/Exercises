# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1035;

char grid[MAXN][MAXN];
int m, n, res;
pair<int, int> dir[4] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

void bfs (int i, int j) {
  queue<pair<int, int>> q;
  
  q.push({i, j});
  
  while (!q.empty()) {
    auto [x, y] = q.front(); q.pop();
    if (grid[x][y] == '.') {
      grid[x][y] = 'o';
      for (auto [nx, ny]: dir) q.push({x + nx, y + ny});
    } 
  }
}

int main () {_
  scanf("%d %d", &n, &m);
  
  memset(grid, 'o', sizeof(grid));
  
  for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) scanf(" %c", &grid[i][j]);
  
  for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) if (grid[i][j] == '.') bfs(i, j), res++;
  
  printf("%d\n", res);
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e2 + 10;

int m, n, nx, ny, vis[MAXN][MAXN];
string grid[MAXN];

int valid (int x, int y) {
  if (!(0 <= x && x < n && 0 <= y && y < m) || vis[x][y]) return 0;
  if (grid[x][y] == '*') return 1;
  vis[x][y] = 1;
  if (grid[x][y] == '^') nx = -1, ny = 0;
  else if (grid[x][y] == '>') nx = 0, ny = 1;
  else if (grid[x][y] == 'v') nx = 1, ny = 0;
  else if (grid[x][y] == '<') nx = 0, ny = -1;
  valid(x + nx, y + ny);
}

int main () {_
  cin >> m >> n;
  
  for (int i = 0; i < n; cin >> grid[i++]);
  
  cout << "!*"[valid(0, 0)] << "\n";
  
  return 0;
}
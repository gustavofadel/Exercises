# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e3 + 10;

char grid[MAXN][MAXN];
int m, n, res;
pair<int, int> dir[4] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

bool valid (int i, int j) { return 0 <= i && i < n && 0 <= j && j < m; }
bool is_coast (int i, int j) { return !valid(i, j) || grid[i][j] == '.'; }

int main () {_
  cin >> n >> m;
  
  for (int i = 0; i < n; i++) for (int j = 0; j < m; cin >> grid[i][j++]);
  
  for (int x = 0; x < n; x++) {
    for (int y = 0; y < m; y++) {
      if (grid[x][y] == '.') continue;
      for (auto [nx, ny]: dir) if (is_coast(x + nx, y + ny)) { res++; break; }
    }
  }
  
  return cout << res << "\n", 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 50;

int a, adj[MAXN][MAXN], n, res, t, v, vis[MAXN], x, y;

void dfs (int x) {
  vis[x] = 1; 
  for (int y = 0; y < v; y++) if (adj[x][y] && !vis[y]) { res += 2; dfs(y); }
}


int main () {_
  cin >> t;
  
  while (t--) {
    cin >> n >> v >> a; res = 0;
    for (int i = 0; i < v; vis[i++] = 0) for (int j = 0; j < v; adj[i][j++] = 0);
    while (a--) { cin >> x >> y; adj[x][y] = adj[y][x] = 1; }
    dfs(n); cout << res << "\n";
  }
  
  return 0;
}
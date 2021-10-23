# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 5e4 + 10;

int n, m, res, u, v, vis[MAXN];
vector<int> adj[MAXN];

void dfs (int u) {
  if (vis[u]) return;
  vis[u] = 1; for (int v: adj[u]) dfs(v);
}

int main () {_
  cin >> n >> m;
  
  while (m--) {
    cin >> u >> v;
    adj[u].push_back(v), adj[v].push_back(u);
  }
  
  for (int i = 1; i <= n; i++) if (!vis[i]) dfs(i), res++;
  
  return cout << res << "\n", 0;
}
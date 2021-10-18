# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e4 + 10;

int a, b, cycle, m, n, t, vis[MAXN];
vector<int> adj[MAXN];

void dfs (int a) {
  vis[a] = 1;
  
  for (int b: adj[a]) {
    if (!vis[b]) dfs(b);
    else if (vis[b] == 1) { cycle = 1; return; }
  }
  
  vis[a] = 2;
}

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> n >> m; cycle = 0;
    
    for (int i = 1; i <= n; adj[i].clear(), vis[i++] = 0);
    
    while (m--) { cin >> a >> b; adj[a].push_back(b); }
    
    for (int i = 1; i <= n && !cycle; i++) if (!vis[i]) dfs(i);
    
    cout << (cycle ? "SIM" : "NAO") << "\n";
  }
  
  return 0;
}
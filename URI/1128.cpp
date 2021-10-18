# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 2e3 + 10;

int dfs_cnt, dfs_low[MAXN], dfs_num[MAXN], m, n, num_scc, p, scc[MAXN], v, vis[MAXN], w;
vector<int> adj[MAXN], vet;

void tarjan (int u) {
  dfs_low[u] = dfs_num[u] = dfs_cnt++; vet.push_back(u); vis[u] = 1;
  
  for (int v: adj[u]) {
    if (!~dfs_num[v]) tarjan(v);
    if (vis[v]) dfs_low[u] = min(dfs_low[u], dfs_low[v]);
  }
  
  if (dfs_low[u] == dfs_num[u]) {
    while (true) {
      int v = vet.back(); vet.pop_back();
      scc[v] = num_scc; vis[v] = 0;
      if (u == v) break;
    }
    
    num_scc++;
  }
}

int main () {_
  while (cin >> n >> m && (n || m)) {
    dfs_cnt = num_scc = 0; vet.clear();
    
    for (int i = 1; i <= n; i++) {
      adj[i].clear();
      dfs_low[i] = vis[i] = 0;
      dfs_num[i] = -1;
    }
    
    while (m--) {
      cin >> v >> w >> p;
      if (p == 1) adj[v].push_back(w);
      else { adj[v].push_back(w); adj[w].push_back(v); }
    }
    
    for (int i = 1; i <= n; i++) if (!~dfs_num[i]) tarjan(i);
    
    cout << int(num_scc == 1) << "\n";
  }
  
  return 0;
}
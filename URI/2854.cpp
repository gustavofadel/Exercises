# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 3e3 + 10;

int id, n, m, res, vis[MAXN];
map<string, int> mp;
string a, b, c;
vector<int> adj[MAXN];

void dfs (int u) {
  if (vis[u]) return;
  vis[u] = 1; for (int v: adj[u]) dfs(v);
}

int main () {_
  cin >> n >> m;
  
  while (m--) {
    cin >> a >> b >> c;
    if (!mp[a]) mp[a] = ++id;
    if (!mp[c]) mp[c] = ++id;
    adj[mp[a]].push_back(mp[c]), adj[mp[c]].push_back(mp[a]);
  }
  
  for (int i = 1; i < id; i++) if (!vis[i]) dfs(i), res++;
  
  return cout << res << "\n", 0;
}
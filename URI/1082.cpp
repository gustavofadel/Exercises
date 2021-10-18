# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

char a, b;
int e, t, v;
map<char, int> vis;
map<char, set<char>> adj;
set<char> st;

void dfs (char a) {
  st.insert(a); vis[a] = 1;
  for (char b: adj[a]) if (!vis[b]) dfs(b);
}

int main () {_
  cin >> t;
  
  for (int tc = 1; tc <= t; tc++) {
    int cnt = 0;
    
    for (char c = 'a'; c <= 'z'; adj[c].clear(), vis[c++] = 0);
    
    cin >> v >> e;
    
    while (e--) { cin >> a >> b; adj[a].insert(b); adj[b].insert(a); }
    
    cout << "Case #" << tc << ":\n";
    
    for (char c = 'a'; c < 'a' + v; c++) {
      if (!vis[c]) {
        cnt++; st.clear(); dfs(c);
        for (char ch: st) cout << ch << ",";
        cout << "\n";
      }
    }
    
    cout << cnt << " connected components\n\n";
  }
  
  return 0;
}
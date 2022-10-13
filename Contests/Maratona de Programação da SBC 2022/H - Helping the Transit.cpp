# include <bits/stdc++.h>
 
using namespace std;
 
# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

const int N = 1e4 + 10;

int comp[N], counter, in[N], in_cnt, low[N], m, n, num[N], numSCC, out[N], out_cnt, r, s, vis[N];
stack<int> st;
vector<int> adj[N];

void dfs (int u) {
    low[u] = num[u] = counter++;
    st.push(u); 
    vis[u] = 1;
	
    for (int v: adj[u]) {
        if (num[v] == -1) {
            dfs(v);
	}
		
	if (vis[v]) {
	    low[u] = min(low[u], low[v]);
	}
    }
	
    if (low[u] == num[u]) {
        while (true) {
            int v = st.top(); st.pop();
	    vis[v] = 0;
	    comp[v] = numSCC;
			
	    if (u == v) {
	        break;
	    }
	}
		
	numSCC++;
    }
}
 
int main () {_
    cin >> n >> m;
    
    while (m--) {
        cin >> r >> s;
        adj[r].push_back(s);
    }
    
    memset(num, -1, sizeof(num));
    
    for (int i = 1; i <= n; i++) {
        if (num[i] == -1) {
            dfs(i);
        }
    }
    
    if (numSCC == 1) {
        return !(cout << "0\n");
    }
    
    for (int u = 1; u <= n; u++) {
        for (int v: adj[u]) {
            if (comp[u] != comp[v]) {
                in[comp[v]]++;
                out[comp[u]]++;
            }
        }
    }
    
    for (int i = 0; i < numSCC; i++) {
        in_cnt += (in[i] == 0);
        out_cnt += (out[i] == 0);
    }
    
    cout << max(in_cnt, out_cnt) << "\n";
}

# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
# define MOD 1000000007
# define INF 0x3f3f3f3f
# define INFLL 0x3f3f3f3f3f3f3f3f
# define EPS 1e-9
# define PI 3.141592653589793238462643383279502884
# define pb push_back
# define pf push_front
# define fi first
# define se second
# define mp make_pair
# define sz(x) int(x.size())
# define all(x) x.begin(), x.end()
# define mset(x, y) memset(&x, (y), sizeof(x))

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> ii;

const int N = 1e5 + 10;

void set_IO (string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

struct Edge {
  int u, v, w;
  
  bool operator < (const Edge& e) const {
      return w < e.w;
  }
};

int b, c, current_capacity, n, parent[N], query_answer[N], u, v, w;
set<int> queries[N];
vector<Edge> edges;

int find_set (int v) {
    if (v == parent[v]) {
        return v;
    }
    
    return parent[v] = find_set(parent[v]);
}

void union_sets (int a, int b) {
    a = find_set(a);
    b = find_set(b);
    
    if (a != b) {
        if (sz(queries[a]) < sz(queries[b])) {
            swap(a, b);
        }
        
        parent[b] = a;
        
        for (auto it = queries[b].begin(); it != queries[b].end(); it++) {
            if (queries[a].count(*it) > 0) {
                query_answer[*it] = current_capacity;
                queries[a].erase(*it);
            }
            
            else {
                queries[a].insert(*it);
            }
        }
        
        queries[b].clear();
    }
}

int main () {_
    cin >> n >> b;
    
    for (int i = 0; i < b; i++) {
        cin >> u >> v >> w;
        edges.pb({u, v, w});
    }
    
    sort(edges.rbegin(), edges.rend());
    
    iota(parent + 1, parent + n + 1, 1);
    
    cin >> c;
    
    for (int i = 0; i < c; i++) {
        cin >> u >> v;
        queries[u].insert(i);
        queries[v].insert(i);
    }
    
    for (int i = 0; i < b; i++) {
        current_capacity = edges[i].w;
        
        if (find_set(edges[i].u) != find_set(edges[i].v)) {
            union_sets(edges[i].u, edges[i].v);
        }
    }
    
    for (int i = 0; i < c; i++) {
        cout << query_answer[i] << "\n";
    }
}
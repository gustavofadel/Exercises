# include <bits/stdc++.h>
 
using namespace std;
 
# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
 
const int N = 3e5 + 10;
 
int a, f, n, p, x[N], y;
vector<int> tree[4 * N];
 
// Build a merge sort tree
void build (int node, int l, int r) {
    if (l == r) {
        tree[node].push_back(x[l]);
        return;
    } 
    
    int a = 2 * node, b = 2 * node + 1, mid = (l + r) >> 1;
    
    build(a, l, mid);
    build(b, mid + 1, r);
    
    merge(tree[a].begin(), tree[a].end(), tree[b].begin(), tree[b].end(), back_inserter(tree[node]));
}
 
// Number of elements in [a, b] interval that are bigger than x
int query (int node, int l, int r, int a, int b, int x) {
    if (l > b || r < a) {
        return 0;
    }
    
    if (l >= a && r <= b) {
        return tree[node].end() - upper_bound(tree[node].begin(), tree[node].end(), x);
    }
    
    int mid = (l + r) >> 1;
    
    return query(2 * node, l, mid, a, b, x) + query(2 * node + 1, mid + 1, r, a, b, x);
}
 
int main () {_
    cin >> y >> n;
    
    for (int i = 1; i <= y; i++) {
        cin >> x[i];
    }
    
    build(1, 1, y);
    
    while (n--) {
        cin >> a >> p >> f;
        
        // Checks if had already qualified for the finals or if stopped following the results
        if (x[a] >= p || !f) {
            cout << "0\n";
        }
        
        else {
            cout << query(1, 1, y, a, a + f, p - 1) << "\n";
        }
    }
}
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

using ll = long long;

const int MAXN = 2000005;

int parent_node[MAXN];
ll diff_val[MAXN];
int rnk[MAXN];

int find_set(int v) {
    if (v == parent_node[v]) return v;
    int p = parent_node[v];
    parent_node[v] = find_set(parent_node[v]);
    diff_val[v] += diff_val[p];
    return parent_node[v];
}

void union_sets(int u, int v, ll w) {
    int root_u = find_set(u);
    int root_v = find_set(v);
    if (root_u == root_v) return;

    if (rnk[root_u] < rnk[root_v]) {
        parent_node[root_u] = root_v;
        diff_val[root_u] = diff_val[v] - diff_val[u] - w;
    } else {
        parent_node[root_v] = root_u;
        diff_val[root_v] = w + diff_val[u] - diff_val[v];
        if (rnk[root_u] == rnk[root_v]) {
            rnk[root_u]++;
        }
    }
}

int main() {
    fastio;
    int n, q;
    if (!(cin >> n >> q)) return 0;

    rep(i, 0, n + 1) {
        parent_node[i] = i;
        diff_val[i] = 0;
        rnk[i] = 0;
    }

    rep(i, 0, q) {
        char type;
        cin >> type;
        if (type == 'L') {
            int l, r;
            ll x;
            cin >> l >> r >> x;
            union_sets(l - 1, r, x);
        } else {
            int l, r;
            cin >> l >> r;
            int root_u = find_set(l - 1);
            int root_v = find_set(r);
            if (root_u != root_v) {
                cout << "Esquecido\n";
            } else {
                cout << diff_val[r] - diff_val[l - 1] << "\n";
            }
        }
    }

    return 0;
}
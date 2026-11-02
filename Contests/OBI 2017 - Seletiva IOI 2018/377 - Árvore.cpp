#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")

const int MAXN = 500005;
const int MAXW = 500005;
const int LOGN = 20;

static char buf_in[1 << 20];
static size_t ptr_in = 0, len_in = 0;

inline char get_char() {
    if (ptr_in == len_in) {
        ptr_in = 0;
        len_in = fread(buf_in, 1, sizeof(buf_in), stdin);
        if (len_in == 0) return 0;
    }
    return buf_in[ptr_in++];
}

inline bool read_int(int &x) {
    char c = get_char();
    while (c && c <= ' ') c = get_char();
    if (!c) return false;
    x = 0;
    while (c >= '0' && c <= '9') {
        x = x * 10 + (c - '0');
        c = get_char();
    }
    return true;
}

static char buf_out[1 << 20];
static size_t ptr_out = 0;

inline void write_char(char c) {
    if (ptr_out == sizeof(buf_out)) {
        fwrite(buf_out, 1, sizeof(buf_out), stdout);
        ptr_out = 0;
    }
    buf_out[ptr_out++] = c;
}

inline void write_int(int x) {
    char s[16];
    int len = 0;
    do {
        s[len++] = (char)('0' + (x % 10));
        x /= 10;
    } while (x > 0);
    while (len > 0) {
        write_char(s[--len]);
    }
    write_char('\n');
}

inline void flush_out() {
    if (ptr_out > 0) {
        fwrite(buf_out, 1, ptr_out, stdout);
        ptr_out = 0;
    }
}

int n, q;
int w[MAXN];
vector<int> adj[MAXN];

int root_pst[MAXN];
int lc[MAXN * 21];
int rc[MAXN * 21];
int tree_cnt[MAXN * 21];
int node_cnt = 0;

int up[LOGN][MAXN];
int depth[MAXN];

int insert_pst(int prev, int l, int r, int val) {
    int cur = ++node_cnt;
    lc[cur] = lc[prev];
    rc[cur] = rc[prev];
    tree_cnt[cur] = tree_cnt[prev] + 1;

    if (l == r) return cur;

    int mid = l + (r - l) / 2;
    if (val <= mid) {
        lc[cur] = insert_pst(lc[prev], l, mid, val);
    } else {
        rc[cur] = insert_pst(rc[prev], mid + 1, r, val);
    }

    return cur;
}

void build_tree() {
    queue<int> Q;
    Q.push(1);
    depth[1] = 1;
    root_pst[1] = insert_pst(0, 1, MAXW, w[1]);

    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();

        for (int v : adj[u]) {
            if (v != up[0][u]) {
                depth[v] = depth[u] + 1;
                up[0][v] = u;
                root_pst[v] = insert_pst(root_pst[u], 1, MAXW, w[v]);
                Q.push(v);
            }
        }
    }

    for (int k = 1; k < LOGN; ++k) {
        for (int i = 1; i <= n; ++i) {
            int p = up[k - 1][i];
            up[k][i] = (p == 0 ? 0 : up[k - 1][p]);
        }
    }
}

int get_lca(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);

    for (int k = LOGN - 1; k >= 0; --k) {
        if (depth[u] - (1 << k) >= depth[v]) {
            u = up[k][u];
        }
    }

    if (u == v) return u;

    for (int k = LOGN - 1; k >= 0; --k) {
        if (up[k][u] != up[k][v]) {
            u = up[k][u];
            v = up[k][v];
        }
    }

    return up[0][u];
}

int query_kth(int root_u, int root_v, int root_lca, int root_plca, int l, int r, int k) {
    if (l == r) return l;

    int left_cnt = tree_cnt[lc[root_u]] + tree_cnt[lc[root_v]] 
                 - tree_cnt[lc[root_lca]] - tree_cnt[lc[root_plca]];

    int mid = l + (r - l) / 2;
    if (k <= left_cnt) {
        return query_kth(lc[root_u], lc[root_v], lc[root_lca], lc[root_plca], l, mid, k);
    } else {
        return query_kth(rc[root_u], rc[root_v], rc[root_lca], rc[root_plca], mid + 1, r, k - left_cnt);
    }
}

int main() {
    if (!read_int(n) || !read_int(q)) return 0;

    for (int i = 1; i <= n; ++i) {
        read_int(w[i]);
    }

    for (int i = 1; i < n; ++i) {
        int u, v;
        read_int(u);
        read_int(v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    build_tree();

    while (q--) {
        int k_val, a, b;
        read_int(k_val);
        read_int(a);
        read_int(b);

        int lca = get_lca(a, b);
        int plca = up[0][lca];

        int ans = query_kth(root_pst[a], root_pst[b], root_pst[lca], root_pst[plca], 1, MAXW, k_val);
        write_int(ans);
    }

    flush_out();

    return 0;
}
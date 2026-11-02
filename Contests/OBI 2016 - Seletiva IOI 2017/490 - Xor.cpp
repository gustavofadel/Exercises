#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back

const int MAXN = 300005;
const int MAX_NODES = MAXN * 31;

int n, k;
int a[MAXN];
int prv[MAXN], nxt[MAXN];
vector<int> to_remove[MAXN];

int trie_ch[MAX_NODES][2];
int trie_val[MAX_NODES];
int trie_sz = 1;

inline int new_node(int init_val) {
    int u = ++trie_sz;
    trie_ch[u][0] = trie_ch[u][1] = 0;
    trie_val[u] = init_val;
    return u;
}

void insert_prev(int val, int idx) {
    int curr = 1;
    trie_val[curr] = max(trie_val[curr], idx);
    for (int b = 29; b >= 0; --b) {
        int bit = (val >> b) & 1;
        if (!trie_ch[curr][bit]) {
            trie_ch[curr][bit] = new_node(0);
        }
        curr = trie_ch[curr][bit];
        trie_val[curr] = max(trie_val[curr], idx);
    }
}

int query_prev(int val, int k_val) {
    int curr = 1;
    int best = 0;
    for (int b = 29; b >= 0; --b) {
        if (!curr) break;
        int bit_k = (k_val >> b) & 1;
        int bit_v = (val >> b) & 1;
        if (bit_k == 1) {
            int same = trie_ch[curr][bit_v];
            if (same) best = max(best, trie_val[same]);
            curr = trie_ch[curr][1 - bit_v];
        } else {
            curr = trie_ch[curr][bit_v];
        }
    }
    return best;
}

void insert_next(int val, int idx) {
    int curr = 1;
    trie_val[curr] = min(trie_val[curr], idx);
    for (int b = 29; b >= 0; --b) {
        int bit = (val >> b) & 1;
        if (!trie_ch[curr][bit]) {
            trie_ch[curr][bit] = new_node(n + 1);
        }
        curr = trie_ch[curr][bit];
        trie_val[curr] = min(trie_val[curr], idx);
    }
}

int query_next(int val, int k_val) {
    int curr = 1;
    int best = n + 1;
    for (int b = 29; b >= 0; --b) {
        if (!curr) break;
        int bit_k = (k_val >> b) & 1;
        int bit_v = (val >> b) & 1;
        if (bit_k == 1) {
            int same = trie_ch[curr][bit_v];
            if (same) best = min(best, trie_val[same]);
            curr = trie_ch[curr][1 - bit_v];
        } else {
            curr = trie_ch[curr][bit_v];
        }
    }
    return best;
}

struct SegTree {
    vector<int> mn, lazy;
    SegTree(int sz) : mn(4 * sz + 5, 0), lazy(4 * sz + 5, 0) {}

    void push(int node) {
        if (lazy[node] != 0) {
            lazy[2 * node] += lazy[node];
            mn[2 * node] += lazy[node];
            lazy[2 * node + 1] += lazy[node];
            mn[2 * node + 1] += lazy[node];
            lazy[node] = 0;
        }
    }

    void update(int node, int l, int r, int ql, int qr, int val) {
        if (ql <= l && r <= qr) {
            mn[node] += val;
            lazy[node] += val;
            return;
        }
        push(node);
        int mid = l + (r - l) / 2;
        if (ql <= mid) update(2 * node, l, mid, ql, qr, val);
        if (qr > mid) update(2 * node + 1, mid + 1, r, ql, qr, val);
        mn[node] = min(mn[2 * node], mn[2 * node + 1]);
    }

    int find_first_zero(int node, int l, int r, int ql, int qr) {
        if (l > qr || r < ql || mn[node] > 0) return -1;
        if (l == r) return l;
        push(node);
        int mid = l + (r - l) / 2;
        int res = find_first_zero(2 * node, l, mid, ql, qr);
        if (res != -1) return res;
        return find_first_zero(2 * node + 1, mid + 1, r, ql, qr);
    }
};

int main() {
    fastio;

    if (!(cin >> n >> k)) return 0;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    trie_sz = 1;
    trie_ch[1][0] = trie_ch[1][1] = 0;
    trie_val[1] = 0;
    for (int i = 1; i <= n; ++i) {
        prv[i] = query_prev(a[i], k);
        insert_prev(a[i], i);
    }

    trie_sz = 1;
    trie_ch[1][0] = trie_ch[1][1] = 0;
    trie_val[1] = n + 1;
    for (int i = n; i >= 1; --i) {
        nxt[i] = query_next(a[i], k);
        insert_next(a[i], i);
    }

    for (int i = 1; i <= n; ++i) {
        if (nxt[i] <= n) {
            to_remove[nxt[i]].pb(i);
        }
    }

    SegTree st(n);
    int ans = 0;

    for (int r = 1; r <= n; ++r) {
        for (int x : to_remove[r]) {
            st.update(1, 1, n, prv[x] + 1, x, -1);
        }

        st.update(1, 1, n, prv[r] + 1, r, 1);

        int best_l = st.find_first_zero(1, 1, n, 1, r);
        if (best_l != -1) {
            ans = max(ans, r - best_l + 1);
        }
    }

    cout << ans << "\n";

    return 0;
}
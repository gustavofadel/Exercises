#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define fi first
#define se second

const int MAX = 250005;

struct Node {
    int val, sum;
    uint32_t prio;
    int sz;
    int l, r;
};

Node tree[MAX];
int node_cnt = 0;
mt19937 rng(1337);

int new_node(int v) {
    node_cnt++;
    tree[node_cnt].val = v;
    tree[node_cnt].sum = v;
    tree[node_cnt].prio = rng();
    tree[node_cnt].sz = 1;
    tree[node_cnt].l = 0;
    tree[node_cnt].r = 0;
    return node_cnt;
}

void pull(int t) {
    if (!t) return;
    tree[t].sz = 1;
    tree[t].sum = tree[t].val;
    if (tree[t].l) {
        tree[t].sz += tree[tree[t].l].sz;
        tree[t].sum += tree[tree[t].l].sum;
    }
    if (tree[t].r) {
        tree[t].sz += tree[tree[t].r].sz;
        tree[t].sum += tree[tree[t].r].sum;
    }
}

void split(int t, int k, int &l, int &r) {
    if (!t) {
        l = r = 0;
        return;
    }
    int left_sz = tree[t].l ? tree[tree[t].l].sz : 0;
    if (k <= left_sz) {
        split(tree[t].l, k, l, tree[t].l);
        r = t;
    } else {
        split(tree[t].r, k - left_sz - 1, tree[t].r, r);
        l = t;
    }
    pull(t);
}

void merge(int &t, int l, int r) {
    if (!l || !r) {
        t = l ? l : r;
        return;
    }
    if (tree[l].prio > tree[r].prio) {
        merge(tree[l].r, tree[l].r, r);
        t = l;
    } else {
        merge(tree[r].l, l, tree[r].l);
        t = r;
    }
    pull(t);
}

int32_t main() {
    fastio;

    int n;
    if (!(cin >> n)) return 0;

    int root = 0;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        int nd = new_node(val);
        merge(root, root, nd);
    }

    int q;
    if (!(cin >> q)) return 0;

    while (q--) {
        char type;
        cin >> type;
        if (type == 'I') {
            int x, v;
            cin >> x >> v;
            int l = 0, r = 0;
            split(root, x, l, r);
            int nd = new_node(v);
            merge(l, l, nd);
            merge(root, l, r);
        } else if (type == 'S') {
            int x, y;
            cin >> x >> y;

            int total_sz = tree[root].sz;
            int ql = max(1LL, x);
            int qr = min(total_sz, y);

            if (ql > qr) {
                cout << 0 << "\n";
                continue;
            }

            int t1 = 0, t2 = 0, mid = 0, t3 = 0;
            split(root, ql - 1, t1, t2);
            split(t2, qr - ql + 1, mid, t3);

            cout << tree[mid].sum << "\n";

            merge(t2, mid, t3);
            merge(root, t1, t2);
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

using ll = long long;

const int MAX_VAL = 100005;

struct Edge {
    int u, v;
    ll w;
    bool operator<(const Edge& o) const {
        return w < o.w;
    }
};

struct DSU {
    vector<int> parent;
    DSU(int n) : parent(n + 1) {
        iota(all(parent), 0);
    }
    int find(int i) {
        if (parent[i] == i) return i;
        return parent[i] = find(parent[i]);
    }
    bool unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            parent[root_i] = root_j;
            return true;
        }
        return false;
    }
};

int bit_cnt[MAX_VAL + 5];
ll bit_sum[MAX_VAL + 5];

void add(int idx, int cnt, ll val) {
    for (; idx <= MAX_VAL; idx += idx & -idx) {
        bit_cnt[idx] += cnt;
        bit_sum[idx] += val;
    }
}

int query_cnt(int idx) {
    int sum = 0;
    for (; idx > 0; idx -= idx & -idx) {
        sum += bit_cnt[idx];
    }
    return sum;
}

ll query_sum(int idx) {
    ll sum = 0;
    for (; idx > 0; idx -= idx & -idx) {
        sum += bit_sum[idx];
    }
    return sum;
}

int find_kth(int k) {
    int idx = 0;
    for (int i = 1 << 17; i > 0; i >>= 1) {
        if (idx + i <= MAX_VAL && bit_cnt[idx + i] < k) {
            idx += i;
            k -= bit_cnt[idx];
        }
    }
    return idx + 1;
}

ll get_sum_kth(int k) {
    if (k <= 0) return 0;
    int val = find_kth(k);
    int count_less = query_cnt(val - 1);
    ll sum_less = query_sum(val - 1);
    return sum_less + (ll)(k - count_less) * val;
}

int main() {
    fastio;
    int n, m, k, q;
    if (!(cin >> n >> m >> k >> q)) return 0;

    vector<Edge> edges(m);
    rep(i, 0, m) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    sort(all(edges));

    DSU dsu(n);
    vector<ll> mst_edges;
    ll mst_total = 0;

    for (const auto& e : edges) {
        if (dsu.unite(e.u, e.v)) {
            mst_edges.pb(e.w);
            mst_total += e.w;
        }
    }

    sort(mst_edges.rbegin(), mst_edges.rend());

    vector<ll> E(n);
    vector<ll> pref_E(n, 0);
    rep(i, 1, n) {
        E[i] = mst_edges[i - 1];
        pref_E[i] = pref_E[i - 1] + E[i];
    }

    int total_gadgets = 0;
    rep(i, 0, k) {
        int c;
        cin >> c;
        add(c, 1, c);
        total_gadgets++;
    }

    auto solve = [&]() -> ll {
        int max_g = min(total_gadgets, n - 1);
        int low = 1, high = max_g, opt_g = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (find_kth(mid) < E[mid]) {
                opt_g = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return mst_total - pref_E[opt_g] + get_sum_kth(opt_g);
    };

    cout << solve() << "\n";

    while (q--) {
        int type, c;
        cin >> type >> c;
        if (type == 1) {
            add(c, 1, c);
            total_gadgets++;
        } else {
            add(c, -1, -c);
            total_gadgets--;
        }
        cout << solve() << "\n";
    }

    return 0;
}
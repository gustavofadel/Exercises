#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define fi first
#define se second

typedef vector<int> vi;

int32_t main() {
    fastio;

    int n;
    if (!(cin >> n)) return 0;

    vi d(n), b(n), p(n);
    for (int i = 0; i < n; ++i) {
        cin >> d[i] >> b[i] >> p[i];
    }

    vi l(n, 0);
    for (int i = n - 2; i >= 0; --i) {
        l[i] = max(0LL, l[i + 1] + d[i + 1] - b[i + 1]);
        if (l[i] > d[i + 1]) {
            cout << -1 << "\n";
            return 0;
        }
    }

    if (d[0] + l[0] > b[0]) {
        cout << -1 << "\n";
        return 0;
    }

    int total_cost = 0;
    for (int i = 0; i < n; ++i) {
        total_cost += p[i] * d[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        total_cost += (p[i] - p[i + 1]) * l[i];
    }

    map<int, int> pool;
    int total_pool_qty = 0;

    auto insert_pool = [&](int price, int qty) {
        if (qty <= 0) return;
        pool[price] += qty;
        total_pool_qty += qty;
    };

    auto truncate_pool = [&](int max_cap) {
        while (total_pool_qty > max_cap && !pool.empty()) {
            auto it = prev(pool.end());
            int excess = total_pool_qty - max_cap;
            int rem = min(it->se, excess);
            it->se -= rem;
            total_pool_qty -= rem;
            if (it->se == 0) {
                pool.erase(it);
            }
        }
    };

    int init_spare_0 = b[0] - (d[0] + l[0]);
    insert_pool(p[0], init_spare_0);

    for (int i = 1; i < n; ++i) {
        int cap = d[i] - l[i - 1];
        truncate_pool(cap);

        int need = cap;
        int absorbed = 0;
        while (need > 0 && !pool.empty() && pool.begin()->fi < p[i]) {
            auto it = pool.begin();
            int take = min(need, it->se);
            total_cost -= take * (p[i] - it->fi);
            absorbed += take;
            need -= take;
            total_pool_qty -= take;
            it->se -= take;
            if (it->se == 0) {
                pool.erase(it);
            }
        }

        if (i < n - 1) {
            int init_spare_i = b[i] - (d[i] - l[i - 1] + l[i]);
            int total_spare = init_spare_i + absorbed;
            insert_pool(p[i], total_spare);
        }
    }

    cout << total_cost << "\n";

    return 0;
}
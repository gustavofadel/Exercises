#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

using ll = long long;

const int MAXN = 1000005;
const ll INF = 2e18;

ll bit_val[MAXN];
int n, m, k, q;

void update(int idx, ll val) {
    for (; idx <= n; idx += idx & -idx) {
        bit_val[idx] = min(bit_val[idx], val);
    }
}

ll query(int idx) {
    ll res = INF;
    for (; idx > 0; idx -= idx & -idx) {
        res = min(res, bit_val[idx]);
    }
    return res;
}

struct Query {
    int l;
    int id;
};

ll C[MAXN];
int T[MAXN];
vector<int> occ[MAXN];
vector<Query> qry[MAXN];
ll ans[MAXN];

int main() {
    fastio;
    if (!(cin >> n >> m >> k)) return 0;

    rep(i, 1, m + 1) {
        cin >> C[i];
    }

    rep(i, 1, n + 1) {
        cin >> T[i];
    }

    cin >> q;
    rep(i, 0, q) {
        int l, r;
        cin >> l >> r;
        qry[r].pb({l, i});
    }

    fill(bit_val, bit_val + n + 1, INF);

    rep(r, 1, n + 1) {
        int t = T[r];
        occ[t].pb(r);
        if (sz(occ[t]) >= k) {
            int l = occ[t][sz(occ[t]) - k];
            ll val = (ll)k * C[t];
            update(n - l + 1, val);
        }
        for (const auto& cur_q : qry[r]) {
            ll res = query(n - cur_q.l + 1);
            ans[cur_q.id] = (res == INF ? -1 : res);
        }
    }

    rep(i, 0, q) {
        cout << ans[i] << "\n";
    }

    return 0;
}
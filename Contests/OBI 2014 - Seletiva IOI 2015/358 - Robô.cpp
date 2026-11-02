#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define fi first
#define se second

typedef pair<int, int> pii;
typedef vector<int> vi;

const int MAX = 100005;

int cover_cnt[4 * MAX];
int len_cov[4 * MAX];

void update(int node, int l, int r, int ql, int qr, int val) {
    if (ql <= l && r <= qr) {
        cover_cnt[node] += val;
    } else {
        int mid = (l + r) / 2;
        if (ql <= mid) update(2 * node, l, mid, ql, qr, val);
        if (qr > mid) update(2 * node + 1, mid + 1, r, ql, qr, val);
    }
    if (cover_cnt[node] > 0) {
        len_cov[node] = r - l + 1;
    } else {
        if (l == r) len_cov[node] = 0;
        else len_cov[node] = len_cov[2 * node] + len_cov[2 * node + 1];
    }
}

int32_t main() {
    fastio;

    int y, x;
    if (!(cin >> y >> x)) return 0;

    int n = x - 1;
    vector<pii> barriers(n);
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        barriers[i] = {l, r - 1};
    }

    int groups = 0;
    vector<pii> cur_group;

    int i = 0;
    while (i < n) {
        groups++;
        while (i < n) {
            int ql = barriers[i].fi;
            int qr = barriers[i].se;
            update(1, 0, y - 1, ql, qr, 1);
            if (len_cov[1] == y) {
                update(1, 0, y - 1, ql, qr, -1);
                break;
            }
            cur_group.pb({ql, qr});
            i++;
        }
        for (const auto& seg : cur_group) {
            update(1, 0, y - 1, seg.fi, seg.se, -1);
        }
        cur_group.clear();
    }

    int ans = 2 * groups - 1;
    cout << ans << "\n";

    return 0;
}
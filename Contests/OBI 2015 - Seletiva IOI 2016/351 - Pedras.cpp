#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;

const int MAXN = 100005;

int B;

struct Query {
    int l, r, id;
    bool operator<(const Query& other) const {
        int b1 = l / B;
        int b2 = other.l / B;
        if (b1 != b2) return b1 < b2;
        return (b1 & 1) ? (r < other.r) : (r > other.r);
    }
};

int a[MAXN];
int ans[MAXN];
int freq[MAXN];
int cnt_freq[MAXN];
int cur_max = 0;

inline void add(int x) {
    cnt_freq[freq[x]]--;
    freq[x]++;
    cnt_freq[freq[x]]++;
    if (freq[x] > cur_max) {
        cur_max = freq[x];
    }
}

inline void remove(int x) {
    cnt_freq[freq[x]]--;
    if (freq[x] == cur_max && cnt_freq[freq[x]] == 0) {
        cur_max--;
    }
    freq[x]--;
    cnt_freq[freq[x]]++;
}

int main() {
    fastio;

    int n, q;
    if (!(cin >> n >> q)) return 0;

    vi vals;
    vals.reserve(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        vals.pb(a[i]);
    }

    sort(all(vals));
    vals.erase(unique(all(vals)), vals.end());

    for (int i = 0; i < n; ++i) {
        a[i] = lower_bound(all(vals), a[i]) - vals.begin();
    }

    B = max(1, (int)(n / sqrt(q)));

    vector<Query> queries(q);
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        queries[i] = {l - 1, r - 1, i};
    }

    sort(all(queries));

    int cur_l = 0, cur_r = -1;
    for (int i = 0; i < q; ++i) {
        int ql = queries[i].l;
        int qr = queries[i].r;

        while (cur_r < qr) add(a[++cur_r]);
        while (cur_l > ql) add(a[--cur_l]);
        while (cur_r > qr) remove(a[cur_r--]);
        while (cur_l < ql) remove(a[cur_l++]);

        ans[queries[i].id] = cur_max;
    }

    for (int i = 0; i < q; ++i) {
        cout << ans[i] << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;

const int MAXN = 100005;

struct Fenwick {
    int n;
    vi tree;
    void init(int sz) {
        n = sz;
        tree.assign(n + 1, 0);
    }
    void add(int i, int delta) {
        for (; i <= n; i += i & (-i)) tree[i] += delta;
    }
    int query(int i) {
        int sum = 0;
        for (; i > 0; i -= i & (-i)) sum += tree[i];
        return sum;
    }
    int query(int l, int r) {
        if (l > r) return 0;
        return query(r) - query(l - 1);
    }
};

struct Event {
    int coord;
    int type;
    int y1, y2;
    int id;
    bool operator<(const Event& other) const {
        if (coord != other.coord) return coord < other.coord;
        return type < other.type;
    }
};

int n, k;
int d[MAXN];
int seg_type[MAXN];
int fixed_coord[MAXN];
int min_coord[MAXN], max_coord[MAXN];
int inc_cnt[MAXN];

vi all_X, all_Y;
Fenwick bit_X, bit_Y;
vector<Event> events_A, events_B;

void cdq(int l, int r) {
    if (l >= r) return;

    int mid = l + (r - l) / 2;
    cdq(l, mid);
    cdq(mid + 1, r);

    events_A.clear();
    for (int j = l; j <= mid; ++j) {
        if (seg_type[j] == 0) {
            int y_val = fixed_coord[j];
            int y_idx = lower_bound(all(all_Y), y_val) - all_Y.begin() + 1;

            int lx = upper_bound(all(all_X), min_coord[j]) - all_X.begin() + 1;
            int rx = lower_bound(all(all_X), max_coord[j]) - all_X.begin();

            if (lx <= rx) {
                events_A.pb({lx, 0, y_idx, 0, 0});
                events_A.pb({rx, 2, y_idx, 0, 0});
            }
        }
    }

    for (int i = mid + 1; i <= r; ++i) {
        if (seg_type[i] == 1) {
            int x_val = fixed_coord[i];
            int x_idx = lower_bound(all(all_X), x_val) - all_X.begin() + 1;

            int ly = upper_bound(all(all_Y), min_coord[i]) - all_Y.begin() + 1;
            int ry = lower_bound(all(all_Y), max_coord[i]) - all_Y.begin();

            if (ly <= ry) {
                events_A.pb({x_idx, 1, ly, ry, i});
            }
        }
    }

    sort(all(events_A));
    for (const auto& ev : events_A) {
        if (ev.type == 0) {
            bit_Y.add(ev.y1, 1);
        } else if (ev.type == 1) {
            inc_cnt[ev.id] += bit_Y.query(ev.y1, ev.y2);
        } else if (ev.type == 2) {
            bit_Y.add(ev.y1, -1);
        }
    }

    events_B.clear();
    for (int j = l; j <= mid; ++j) {
        if (seg_type[j] == 1) {
            int x_val = fixed_coord[j];
            int x_idx = lower_bound(all(all_X), x_val) - all_X.begin() + 1;

            int ly = upper_bound(all(all_Y), min_coord[j]) - all_Y.begin() + 1;
            int ry = lower_bound(all(all_Y), max_coord[j]) - all_Y.begin();

            if (ly <= ry) {
                events_B.pb({ly, 0, x_idx, 0, 0});
                events_B.pb({ry, 2, x_idx, 0, 0});
            }
        }
    }

    for (int i = mid + 1; i <= r; ++i) {
        if (seg_type[i] == 0) {
            int y_val = fixed_coord[i];
            int y_idx = lower_bound(all(all_Y), y_val) - all_Y.begin() + 1;

            int lx = upper_bound(all(all_X), min_coord[i]) - all_X.begin() + 1;
            int rx = lower_bound(all(all_X), max_coord[i]) - all_X.begin();

            if (lx <= rx) {
                events_B.pb({y_idx, 1, lx, rx, i});
            }
        }
    }

    sort(all(events_B));
    for (const auto& ev : events_B) {
        if (ev.type == 0) {
            bit_X.add(ev.y1, 1);
        } else if (ev.type == 1) {
            inc_cnt[ev.id] += bit_X.query(ev.y1, ev.y2);
        } else if (ev.type == 2) {
            bit_X.add(ev.y1, -1);
        }
    }
}

int32_t main() {
    fastio;

    if (!(cin >> n >> k)) return 0;

    int cur_x = 0, cur_y = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> d[i];
        if (i % 2 == 1) {
            seg_type[i] = 0;
            fixed_coord[i] = cur_y;
            int next_x = cur_x + d[i];
            min_coord[i] = min(cur_x, next_x);
            max_coord[i] = max(cur_x, next_x);
            all_Y.pb(cur_y);
            cur_x = next_x;
        } else {
            seg_type[i] = 1;
            fixed_coord[i] = cur_x;
            int next_y = cur_y + d[i];
            min_coord[i] = min(cur_y, next_y);
            max_coord[i] = max(cur_y, next_y);
            all_X.pb(cur_x);
            cur_y = next_y;
        }
    }

    sort(all(all_X));
    all_X.erase(unique(all(all_X)), all_X.end());

    sort(all(all_Y));
    all_Y.erase(unique(all(all_Y)), all_Y.end());

    bit_X.init(all_X.size());
    bit_Y.init(all_Y.size());

    events_A.reserve(2 * MAXN);
    events_B.reserve(2 * MAXN);

    cdq(1, n);

    int total_intersections = 0;
    for (int i = 1; i <= n; ++i) {
        total_intersections += inc_cnt[i];
        if (total_intersections >= k) {
            cout << i << " " << total_intersections << "\n";
            return 0;
        }
    }

    cout << n << " " << total_intersections << "\n";

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

using ll = long long;

const int MAX_COORD = 100005;
const int MAX_NODES = 400005;
const int INF = 2e9;

int bit_cnt_x[MAX_COORD];
ll bit_sum_x[MAX_COORD];
int bit_cnt_y[MAX_COORD];
ll bit_sum_y[MAX_COORD];

void add_x(int val, int count, ll sum_delta) {
    for (; val < MAX_COORD; val += val & -val) {
        bit_cnt_x[val] += count;
        bit_sum_x[val] += sum_delta;
    }
}

int query_cnt_x(int val) {
    int res = 0;
    for (; val > 0; val -= val & -val) {
        res += bit_cnt_x[val];
    }
    return res;
}

ll query_sum_x(int val) {
    ll res = 0;
    for (; val > 0; val -= val & -val) {
        res += bit_sum_x[val];
    }
    return res;
}

int find_kth_x(int k) {
    int idx = 0;
    for (int i = 1 << 17; i > 0; i >>= 1) {
        if (idx + i < MAX_COORD && bit_cnt_x[idx + i] < k) {
            idx += i;
            k -= bit_cnt_x[idx];
        }
    }
    return idx + 1;
}

ll get_sum_kth_x(int k) {
    if (k <= 0) return 0;
    int val = find_kth_x(k);
    int count_less = query_cnt_x(val - 1);
    ll sum_less = query_sum_x(val - 1);
    return sum_less + (ll)(k - count_less) * (val - 1);
}

void add_y(int val, int count, ll sum_delta) {
    for (; val < MAX_COORD; val += val & -val) {
        bit_cnt_y[val] += count;
        bit_sum_y[val] += sum_delta;
    }
}

int query_cnt_y(int val) {
    int res = 0;
    for (; val > 0; val -= val & -val) {
        res += bit_cnt_y[val];
    }
    return res;
}

ll query_sum_y(int val) {
    ll res = 0;
    for (; val > 0; val -= val & -val) {
        res += bit_sum_y[val];
    }
    return res;
}

int find_kth_y(int k) {
    int idx = 0;
    for (int i = 1 << 17; i > 0; i >>= 1) {
        if (idx + i < MAX_COORD && bit_cnt_y[idx + i] < k) {
            idx += i;
            k -= bit_cnt_y[idx];
        }
    }
    return idx + 1;
}

ll get_sum_kth_y(int k) {
    if (k <= 0) return 0;
    int val = find_kth_y(k);
    int count_less = query_cnt_y(val - 1);
    ll sum_less = query_sum_y(val - 1);
    return sum_less + (ll)(k - count_less) * (val - 1);
}

struct Node {
    int x, y;
    int cnt;
    int active_cnt;
    int total_nodes;
    int l, r, parent;
    int min_x, max_x, min_y, max_y;
};

Node tree[MAX_NODES];
vector<int> freelist;
int node_cnt = 0;
int root = 0;

int alloc_node() {
    int u;
    if (!freelist.empty()) {
        u = freelist.back();
        freelist.pop_back();
    } else {
        u = ++node_cnt;
    }
    tree[u].l = tree[u].r = tree[u].parent = 0;
    tree[u].cnt = tree[u].active_cnt = tree[u].total_nodes = 0;
    return u;
}

void pushup(int u) {
    tree[u].active_cnt = tree[u].cnt;
    tree[u].total_nodes = 1;
    tree[u].min_x = tree[u].max_x = tree[u].x;
    tree[u].min_y = tree[u].max_y = tree[u].y;

    if (tree[u].l) {
        int l = tree[u].l;
        tree[l].parent = u;
        tree[u].active_cnt += tree[l].active_cnt;
        tree[u].total_nodes += tree[l].total_nodes;
        tree[u].min_x = min(tree[u].min_x, tree[l].min_x);
        tree[u].max_x = max(tree[u].max_x, tree[l].max_x);
        tree[u].min_y = min(tree[u].min_y, tree[l].min_y);
        tree[u].max_y = max(tree[u].max_y, tree[l].max_y);
    }
    if (tree[u].r) {
        int r = tree[u].r;
        tree[r].parent = u;
        tree[u].active_cnt += tree[r].active_cnt;
        tree[u].total_nodes += tree[r].total_nodes;
        tree[u].min_x = min(tree[u].min_x, tree[r].min_x);
        tree[u].max_x = max(tree[u].max_x, tree[r].max_x);
        tree[u].min_y = min(tree[u].min_y, tree[r].min_y);
        tree[u].max_y = max(tree[u].max_y, tree[r].max_y);
    }
}

struct PointRef {
    int x, y, cnt;
};

void flatten(int u, vector<PointRef>& pts) {
    if (!u) return;
    flatten(tree[u].l, pts);
    if (tree[u].cnt > 0) {
        pts.pb({tree[u].x, tree[u].y, tree[u].cnt});
    }
    freelist.pb(u);
    flatten(tree[u].r, pts);
}

int build_kdtree(vector<PointRef>& pts, int l, int r, int cd, int p) {
    if (l > r) return 0;
    int mid = l + (r - l) / 2;
    if (cd == 0) {
        nth_element(pts.begin() + l, pts.begin() + mid, pts.begin() + r + 1,
            [](const PointRef& a, const PointRef& b) {
                if (a.x != b.x) return a.x < b.x;
                return a.y < b.y;
            });
    } else {
        nth_element(pts.begin() + l, pts.begin() + mid, pts.begin() + r + 1,
            [](const PointRef& a, const PointRef& b) {
                if (a.y != b.y) return a.y < b.y;
                return a.x < b.x;
            });
    }
    int u = alloc_node();
    tree[u].parent = p;
    tree[u].x = pts[mid].x;
    tree[u].y = pts[mid].y;
    tree[u].cnt = pts[mid].cnt;
    tree[u].l = build_kdtree(pts, l, mid - 1, cd ^ 1, u);
    tree[u].r = build_kdtree(pts, mid + 1, r, cd ^ 1, u);
    pushup(u);
    return u;
}

void rebuild_subtree(int u, int cd) {
    int p = tree[u].parent;
    vector<PointRef> pts;
    flatten(u, pts);
    int new_u = build_kdtree(pts, 0, sz(pts) - 1, cd, p);
    if (!p) {
        root = new_u;
    } else if (tree[p].l == u) {
        tree[p].l = new_u;
    } else {
        tree[p].r = new_u;
    }
    int curr = p;
    while (curr) {
        pushup(curr);
        curr = tree[curr].parent;
    }
}

int rebuild_node = 0;
int rebuild_cd = 0;

bool insert_kdtree(int& u, int x, int y, int cd) {
    if (!u) {
        u = alloc_node();
        tree[u].x = x;
        tree[u].y = y;
        tree[u].cnt = 1;
        pushup(u);
        return false;
    }
    if (tree[u].x == x && tree[u].y == y) {
        tree[u].cnt++;
        pushup(u);
        return true;
    }
    bool existed = false;
    if (cd == 0 ? (x < tree[u].x || (x == tree[u].x && y < tree[u].y))
                : (y < tree[u].y || (y == tree[u].y && x < tree[u].x))) {
        existed = insert_kdtree(tree[u].l, x, y, cd ^ 1);
    } else {
        existed = insert_kdtree(tree[u].r, x, y, cd ^ 1);
    }
    pushup(u);
    if (!existed) {
        int left_size = tree[u].l ? tree[tree[u].l].total_nodes : 0;
        int right_size = tree[u].r ? tree[tree[u].r].total_nodes : 0;
        if (left_size * 4 > tree[u].total_nodes * 3 || right_size * 4 > tree[u].total_nodes * 3) {
            rebuild_node = u;
            rebuild_cd = cd;
        }
    }
    return existed;
}

void add_point(int x, int y) {
    rebuild_node = 0;
    insert_kdtree(root, x, y, 0);
    if (rebuild_node) {
        rebuild_subtree(rebuild_node, rebuild_cd);
    }
}

void remove_point(int x, int y) {
    int u = root;
    int cd = 0;
    while (u) {
        if (tree[u].x == x && tree[u].y == y) {
            tree[u].cnt--;
            break;
        }
        if (cd == 0) {
            if (x < tree[u].x || (x == tree[u].x && y < tree[u].y)) {
                u = tree[u].l;
            } else {
                u = tree[u].r;
            }
        } else {
            if (y < tree[u].y || (y == tree[u].y && x < tree[u].x)) {
                u = tree[u].l;
            } else {
                u = tree[u].r;
            }
        }
        cd ^= 1;
    }
    int curr = u;
    while (curr) {
        pushup(curr);
        curr = tree[curr].parent;
    }
    if (root && tree[root].active_cnt * 2 < tree[root].total_nodes) {
        rebuild_subtree(root, 0);
    }
}

int best_dist = INF;

int dist_box(int u, int qx, int qy) {
    int dx = max({0, tree[u].min_x - qx, qx - tree[u].max_x});
    int dy = max({0, tree[u].min_y - qy, qy - tree[u].max_y});
    return dx + dy;
}

void query_nn(int u, int qx, int qy) {
    if (!u || tree[u].active_cnt == 0) return;
    if (dist_box(u, qx, qy) >= best_dist) return;

    if (tree[u].cnt > 0) {
        int d = abs(tree[u].x - qx) + abs(tree[u].y - qy);
        best_dist = min(best_dist, d);
        if (best_dist == 0) return;
    }

    int left_box = tree[u].l ? dist_box(tree[u].l, qx, qy) : INF;
    int right_box = tree[u].r ? dist_box(tree[u].r, qx, qy) : INF;

    if (left_box < right_box) {
        query_nn(tree[u].l, qx, qy);
        if (best_dist == 0) return;
        query_nn(tree[u].r, qx, qy);
    } else {
        query_nn(tree[u].r, qx, qy);
        if (best_dist == 0) return;
        query_nn(tree[u].l, qx, qy);
    }
}

int total_points = 0;
ll tot_sum_x = 0;
ll tot_sum_y = 0;

void add_danone(int x, int y) {
    total_points++;
    tot_sum_x += x;
    tot_sum_y += y;
    add_x(x + 1, 1, x);
    add_y(y + 1, 1, y);
    add_point(x, y);
}

void remove_danone(int x, int y) {
    total_points--;
    tot_sum_x -= x;
    tot_sum_y -= y;
    add_x(x + 1, -1, -x);
    add_y(y + 1, -1, -y);
    remove_point(x, y);
}

ll solve_query() {
    if (total_points < 2) return 0;

    if (total_points % 2 == 0) {
        int k = total_points / 2;
        ll bottom_x = get_sum_kth_x(k);
        ll top_x = tot_sum_x - bottom_x;
        ll base_x = top_x - bottom_x;

        ll bottom_y = get_sum_kth_y(k);
        ll top_y = tot_sum_y - bottom_y;
        ll base_y = top_y - bottom_y;

        return base_x + base_y;
    } else {
        int k = (total_points - 1) / 2;
        ll bottom_x = get_sum_kth_x(k);
        ll top_x = tot_sum_x - get_sum_kth_x(k + 1);
        ll base_x = top_x - bottom_x;
        int med_x = find_kth_x(k + 1) - 1;

        ll bottom_y = get_sum_kth_y(k);
        ll top_y = tot_sum_y - get_sum_kth_y(k + 1);
        ll base_y = top_y - bottom_y;
        int med_y = find_kth_y(k + 1) - 1;

        best_dist = INF;
        query_nn(root, med_x, med_y);
        return (base_x + base_y) - best_dist;
    }
}

int main() {
    fastio;
    int n, q;
    if (!(cin >> n >> q)) return 0;

    rep(i, 0, n) {
        int x, y;
        cin >> x >> y;
        add_danone(x, y);
    }

    cout << solve_query() << "\n";

    while (q--) {
        int type, x, y;
        cin >> type >> x >> y;
        if (type == 1) {
            add_danone(x, y);
        } else {
            remove_danone(x, y);
        }
        cout << solve_query() << "\n";
    }

    return 0;
}
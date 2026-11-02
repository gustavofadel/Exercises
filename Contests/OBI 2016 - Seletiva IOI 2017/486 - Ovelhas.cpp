#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;

struct Point {
    int x, y;
    bool operator<(const Point& o) const {
        if (x != o.x) return x < o.x;
        return y < o.y;
    }
    bool operator==(const Point& o) const {
        return x == o.x && y == o.y;
    }
};

__int128 cross(Point a, Point b, Point c) {
    return (__int128)(b.x - a.x) * (c.y - a.y) - (__int128)(b.y - a.y) * (c.x - a.x);
}

bool on_segment(Point a, Point b, Point p) {
    if (cross(a, b, p) != 0) return false;
    __int128 d = (__int128)(p.x - a.x) * (p.x - b.x) + (__int128)(p.y - a.y) * (p.y - b.y);
    return d <= 0;
}

vector<Point> convex_hull(vector<Point>& pts) {
    int n = pts.size();
    if (n <= 2) return pts;

    sort(all(pts));

    vector<Point> lower;
    for (int i = 0; i < n; ++i) {
        while (lower.size() >= 2 && cross(lower[lower.size() - 2], lower.back(), pts[i]) <= 0) {
            lower.pop_back();
        }
        lower.pb(pts[i]);
    }

    vector<Point> upper;
    for (int i = n - 1; i >= 0; --i) {
        while (upper.size() >= 2 && cross(upper[upper.size() - 2], upper.back(), pts[i]) <= 0) {
            upper.pop_back();
        }
        upper.pb(pts[i]);
    }

    lower.pop_back();
    upper.pop_back();

    vector<Point> hull = lower;
    hull.insert(hull.end(), all(upper));
    return hull;
}

bool is_inside(const vector<Point>& h, Point p) {
    int k = h.size();
    if (k == 1) return p == h[0];
    if (k == 2) return on_segment(h[0], h[1], p);

    if (p == h[0]) return true;

    __int128 c1 = cross(h[0], h[1], p);
    if (c1 < 0) return false;
    if (c1 == 0) return on_segment(h[0], h[1], p);

    __int128 c2 = cross(h[0], h[k - 1], p);
    if (c2 > 0) return false;
    if (c2 == 0) return on_segment(h[0], h[k - 1], p);

    int low = 1, high = k - 2, idx = 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (cross(h[0], h[mid], p) >= 0) {
            idx = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return cross(h[idx], h[idx + 1], p) >= 0;
}

int32_t main() {
    fastio;

    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<Point> sheep(n);
    for (int i = 0; i < n; ++i) {
        cin >> sheep[i].x >> sheep[i].y;
    }

    vector<Point> hull = convex_hull(sheep);

    int min_x = 2e18, max_x = -2e18;
    int min_y = 2e18, max_y = -2e18;
    for (const auto& pt : hull) {
        min_x = min(min_x, pt.x);
        max_x = max(max_x, pt.x);
        min_y = min(min_y, pt.y);
        max_y = max(max_y, pt.y);
    }

    int count_inside = 0;
    for (int i = 0; i < q; ++i) {
        Point query_pt;
        cin >> query_pt.x >> query_pt.y;

        if (query_pt.x < min_x || query_pt.x > max_x || query_pt.y < min_y || query_pt.y > max_y) {
            continue;
        }

        if (is_inside(hull, query_pt)) {
            count_inside++;
        }
    }

    cout << count_inside << "\n";

    return 0;
}
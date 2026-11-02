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

const ll INF = 4e18;

struct Point {
    ll x, y, v;
    bool operator<(const Point& o) const {
        if (x != o.x) return x < o.x;
        return y < o.y;
    }
};

struct Item {
    ll dx, dy;
    ll t;
    ll v;
    bool operator<(const Item& o) const {
        if (dx != o.dx) return dx < o.dx;
        if (dy != o.dy) return dy < o.dy;
        return t < o.t;
    }
};

int main() {
    fastio;
    int n;
    if (!(cin >> n)) return 0;

    vector<Point> p(n);
    rep(i, 0, n) {
        cin >> p[i].x >> p[i].y >> p[i].v;
    }

    sort(all(p));

    ll ans = -INF;
    vector<Item> items;
    items.reserve(n);

    rep(i, 0, n) {
        items.clear();
        rep(j, i + 1, n) {
            ll dx = p[j].x - p[i].x;
            ll dy = p[j].y - p[i].y;
            ll g = std::gcd(std::abs(dx), std::abs(dy));
            items.pb({dx / g, dy / g, g, p[j].v});
        }

        sort(all(items));

        int m = sz(items);
        int idx = 0;
        while (idx < m) {
            int nxt = idx;
            ll cur_sum = p[i].v;
            while (nxt < m && items[nxt].dx == items[idx].dx && items[nxt].dy == items[idx].dy) {
                cur_sum += items[nxt].v;
                ans = max(ans, cur_sum);
                nxt++;
            }
            idx = nxt;
        }
    }

    cout << ans << "\n";
    return 0;
}
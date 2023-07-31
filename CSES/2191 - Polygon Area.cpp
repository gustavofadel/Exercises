# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
# define MOD 1000000007
# define INF 0x3f3f3f3f
# define INFLL 0x3f3f3f3f3f3f3f3f
# define EPS 1e-9
# define PI 3.141592653589793238462643383279502884
# define pb push_back
# define pf push_front
# define fi first
# define se second
# define mp make_pair
# define sz(x) int(x.size())
# define all(x) x.begin(), x.end()
# define mset(x, y) memset(&x, (y), sizeof(x))

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> ii;

const int N = 1e5 + 10;

void set_IO (string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

struct Point {
  ll x, y;
  Point () {}
  Point (ll _x, ll _y) : x(_x), y(_y) {}
  Point operator - (const Point& p) const { return Point(x - p.x, y - p.y); }
  ll cross (const Point& p) const { return x * p.y - y * p.x; }
  ll cross (const Point& a, const Point& b) const { return (a - *this).cross(b - *this); }
};

int n;
vector<Point> pts;

ll calculate_area (vector<Point>& pts) {
    ll res = 0;
    
    for (int i = 0; i < sz(pts); i++) {
        Point p = i ? pts[i - 1] : pts.back(), q = pts[i];
        res += (p.x - q.x) * (p.y + q.y);
    }
    
    return llabs(res);
}

int main () {_
   cin >> n;
   
   pts.resize(n);
   
   for (int i = 0; i < n; i++) cin >> pts[i].x >> pts[i].y;
   
   cout << calculate_area(pts) << "\n";
}
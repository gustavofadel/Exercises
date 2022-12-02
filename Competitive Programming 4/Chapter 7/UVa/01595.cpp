# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
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

const int N = 1e2 + 10;
const int X = 1e6 + 10;
const ll MOD = 1e9 + 7;

struct point {
    double x, y;
    point () { x = y = 0.0; }
    point (double _x, double _y) : x(_x), y(_y) {}
    bool operator < (point other) const {
        if (fabs(x - other.x) > EPS) return x < other.x;
        return y < other.y;
    }
    bool operator == (const point &other) const {
        return fabs(x - other.x) < EPS && fabs(y - other.y) < EPS;
    }
};

int n, t;
point p;

int main () {_
    cin >> t;
    
    while (t--) {
        double lo, hi;
        int symmetric = 1;
        set<point> pts;
        
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> p.x >> p.y;
            pts.insert(p);
            lo = i ? min(lo, p.x) : p.x;
            hi = i ? max(hi, p.x) : p.x;
        }
        
        for (auto [x, y]: pts) {
            symmetric &= pts.find(point(lo + hi - x, y)) != pts.end();
            if (!symmetric) break;
        }
        
        cout << (symmetric ? "YES" : "NO") << "\n";
    }
}
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

struct vec {
    double x, y;
    vec (double _x, double _y) : x(_x), y(_y) {}
};

double dist (const point &p1, const point &p2) {
    return hypot(p1.x - p2.x, p1.y - p2.y);
}

vec to_vec (const point &a, const point &b) {
    return vec(b.x - a.x, b.y - a.y);
}

double dot (vec a, vec b) { return a.x * b.x + a.y * b.y; }

double norm_sq (vec v) { return v.x * v.x + v.y * v.y; }

vec scale (const vec &v, double s) {
    return vec(v.x * s, v.y * s);
}

point translate (const point &p, const vec &v) {
    return point(p.x + v.x, p.y + v.y);
}

double dist_to_line (point p, point a, point b, point &c) {
    vec ap = to_vec(a, p), ab = to_vec(a, b);
    double u = dot(ap, ab) / norm_sq(ab);
    c = translate(a, scale(ab, u));
    return dist(p, c);
}

double dist_to_line_segment (point p, point a, point b, point &c) {
    vec ap = to_vec(a, p), ab = to_vec(a, b);
    double u = dot(ap, ab) / norm_sq(ab);
    
    if (u < 0.0) {
        c = point(a.x, a.y);
        return dist(p, a);
    }
    
    if (u > 1.0) {
        c = point(b.x, b.y);
        return dist(p, b);
    }
    
    return dist_to_line(p, a, b, c);
}

double min_dist;
int n;
point ans, m, p;

int main () {_
    while (cin >> m.x >> m.y) {
        cin >> n;
        
        double min_dist;
        vector<point> pts(n + 1);
        
        for (int i = 0; i <= n; i++) {
            cin >> pts[i].x >> pts[i].y;
            
            if (i) {
                double cur_dist = dist_to_line_segment(m, pts[i - 1], pts[i], p);
                if (i == 1 || cur_dist < min_dist) min_dist = cur_dist, ans = p;
            }
        }
        
        cout << fixed << setprecision(4) << ans.x << "\n" << ans.y << "\n";
    }
}
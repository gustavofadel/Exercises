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

int tc;
string dir, num_s, s;

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

double dist (const point &p1, const point &p2) {
    return hypot(p1.x - p2.x, p1.y - p2.y);
}

int main () {_
    while (cin >> s && s != "END") {
        double x = 0.0, y = 0.0;
        string dir = "", num_s = "";
        
        for (int i = 0; i < sz(s); i++) {
            if ('0' <= s[i] && s[i] <= '9') num_s += s[i];
            else if (s[i] == ',' || s[i] == '.') {
                int num = stoi(num_s);
                if (dir == "N") y += num;
                else if (dir == "E") x += num;
                else if (dir == "S") y -= num;
                else if (dir == "W") x -= num;
                else if (dir == "NE") x += (1 / sqrt(2)) * num, y += (1 / sqrt(2)) * num;
                else if (dir == "SE") x += (1 / sqrt(2)) * num, y -= (1 / sqrt(2)) * num;
                else if (dir == "NW") x -= (1 / sqrt(2)) * num, y += (1 / sqrt(2)) * num;
                else x -= (1 / sqrt(2)) * num, y -= (1 / sqrt(2)) * num;
                dir = num_s = "";
            }
            else dir += s[i];
        }
        
        cout << "Map #" << ++tc << "\n";
        cout << fixed << setprecision(3) << "The treasure is located at (" << x << "," << y << ").\n";
        cout << fixed << setprecision(3) << "The distance to the treasure is " << dist(point(0, 0), point(x, y)) << ".\n\n";
    }
}
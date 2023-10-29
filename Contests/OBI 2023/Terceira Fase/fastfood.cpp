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
typedef pair<double, double> dd;
typedef pair<int, int> ii;

const int N = 3e5 + 10;

void set_IO (string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

dd points[N];
double x_max = -INF, x_min = INF, y_max = -INF, y_min = INF;
int maximum_distance, n, smallest_maximum_distance = INF, x[N], y[N];
vector<dd> rectangle_vertices(2);

dd transform (dd point) {
    return {point.fi + point.se, point.fi - point.se};
}

dd original (dd transformed_point) {
    return {(transformed_point.fi + transformed_point.se) / 2.0, (transformed_point.fi - transformed_point.se) / 2.0};
}

int manhattan_distance (dd point_1, dd point_2) {
    return round(abs(point_1.fi - point_2.fi) + abs(point_1.se - point_2.se));
}

int main () {_
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
    }
    
    for (int i = 1; i <= n; i++) {
        cin >> y[i];
    }
    
    for (int i = 1; i <= n; i++) {
        points[i] = {x[i], y[i]};
        
        dd transformed_point = transform(points[i]);
        
        x_max = max(x_max, transformed_point.fi);
        x_min = min(x_min, transformed_point.fi);
        y_max = max(y_max, transformed_point.se);
        y_min = min(y_min, transformed_point.se);
    }
    
    for (int possibility = 1; possibility <= 2; possibility++) {
        // 1st possibility: The top left and bottom right vertices of the rectangle are chosen
        if (possibility == 1) {
            rectangle_vertices[0] = original({x_min, y_max});
            rectangle_vertices[1] = original({x_max, y_min});
        }
        
        // 2nd possibility: The bottom left and top right vertices of the rectangle are chosen.
        else {
            rectangle_vertices[0] = original({x_min, y_min});
            rectangle_vertices[1] = original({x_max, y_max});
        }
        
        maximum_distance = 0;
        
        for (int i = 1; i <= n; i++) {
            // The current point chooses which group it belongs to and then the maximum distance is checked.
            maximum_distance = max(
                maximum_distance, 
                min(
                    manhattan_distance(rectangle_vertices[0], points[i]), 
                    manhattan_distance(rectangle_vertices[1], points[i])
                )
            );
        }
        
        smallest_maximum_distance = min(smallest_maximum_distance, maximum_distance);
    }
    
    cout << smallest_maximum_distance << "\n";
}
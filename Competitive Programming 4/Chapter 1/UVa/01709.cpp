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

double max_diff, mx, x;
int a, b, c, d, n, p;

double price (int k) {
    return (sin(a * k + b) + cos(c * k + d) + 2) * p;
}

int main () {_
    while (cin >> p >> a >> b >> c >> d >> n) {
        max_diff = -DBL_MAX;
        for (int i = 1; i <= n; i++) {
            x = price(i);
            if (i > 1) max_diff = max(max_diff, mx - x), mx = max(mx, x);
            else mx = x;
        }
        cout << fixed << setprecision(6) << max(0.0, max_diff) << "\n";
    }
}
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

const int N = 1e3 + 10;

int n;

int main () {_
    while (cin >> n && n) {
        ii cur, mid;
        int ollie = 0, stan = 0;
        vector<ii> pts;
        for (int i = 0; i < n; i++) {
            if (i == n / 2) cin >> mid.fi >> mid.se;
            else cin >> cur.fi >> cur.se, pts.pb(cur);
        }
        for (auto p: pts) {
            // 1º e 3º quadrante
            if ((p.fi > mid.fi && p.se > mid.se) || (p.fi < mid.fi && p.se < mid.se)) stan++;
            // 2º e 4º quadrante
            else if ((p.fi < mid.fi && p.se > mid.se) || (p.fi > mid.fi && p.se < mid.se)) ollie++;
        }
        cout << stan << " " << ollie << "\n";
    }
}
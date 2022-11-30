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

const int N = 3e5 + 10;

int n;
ii pts[N];
vector<ii> h;

int orientation (ii a, ii b, ii c) {
    ll v = 1LL * a.fi * (b.se - c.se) + 1LL * b.fi * (c.se - a.se) + 1LL * c.fi * (a.se - b.se);
    if (v < 0) return -1; // Horário
    else if (v > 0) return 1; // Anti-horário
    else return 0; // Mesma linha
}

int main () {_
    cin >> n;
    for (int i = 0; i < n; i++) cin >> pts[i].fi >> pts[i].se;
    // Fecho convexo
    sort(pts, pts + n);
    for (int i = 0; i < n; i++) {
        while (sz(h) > 1 && ~orientation(h[sz(h) - 2], h.back(), pts[i])) h.pop_back();
        h.pb(pts[i]);
    }
    // O número de pulos é o número de pontos do fecho convexo menos um, pois ele já está no começo
    cout << sz(h) - 1 << "\n";
}
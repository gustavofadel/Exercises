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

int first = 1, t, w;
pair<int, int> a[N];

int main () {_
    cin >> t;
    while (t--) {
        if (first) first = 0;
        else cout << "\n";
        int possible = 1;
        cin >> w;
        for (int i = 0; i < w; i++) {
            cin >> a[i].fi >> a[i].se;
            if (i) possible &= (a[i].fi - a[i].se == a[i - 1].fi - a[i - 1].se);
        }
        cout << (possible ? "yes" : "no") << "\n";
    }
}
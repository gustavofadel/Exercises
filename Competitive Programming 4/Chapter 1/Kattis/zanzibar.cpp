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

const int N = 1e1 + 10;

int ans, t, x;

int main () {_
    cin >> t;
    while (t--) {
        ans = 0;
        vector<int> a;
        while (cin >> x && x) a.pb(x);
        for (int i = 1; i < a.size(); i++) if (a[i] > 2 * a[i - 1]) ans += a[i] - 2 * a[i - 1];
        cout << ans << "\n";
    }
}
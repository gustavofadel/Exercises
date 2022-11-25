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

const int N = 5e1 + 10;

int a[N], hi, lo, n, t;

int main () {_
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        cin >> n;
        hi = lo = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i) hi += (a[i] > a[i - 1]), lo += (a[i] < a[i - 1]);
        }
        cout << "Case " << tc << ": " << hi << " " << lo << "\n";
    }
}
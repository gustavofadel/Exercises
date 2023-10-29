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

const int K = 3e3 + 10;
const int N = 1e4 + 10;

void set_IO (string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}


int k, n, t[N];
// dp[i][j] = Minimum sum of balance in a box with `j` dolls, taking into account the dolls from 1 to `i`
ll dp[N][K];

int main () {_
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++) {
        cin >> t[i];
    }
    
    sort(t + 1, t + n + 1);
    
    for (int j = 1; j <= k; j++) {
        dp[0][j] = INFLL;
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            dp[i][j] = dp[i - 1][j];
            
            if (n - i > 3 * (k - j) && i > 1 && j) {
                ll cost = 1LL * (t[i] - t[i - 1]) * (t[i] - t[i - 1]);
                dp[i][j] = min(dp[i][j], dp[i - 2][j - 1] + cost);
            }
        }
    }
    
    cout << dp[n][k] << "\n";
}
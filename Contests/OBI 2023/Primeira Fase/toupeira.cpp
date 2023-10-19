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

void set_IO (string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int c[N], grid[N][N], n, p, s, t, total_possible, x, y;

int main () {_
    cin >> s >> t;
    
    while (t--) {
        cin >> x >> y;
        
        grid[x][y] = grid[y][x] = 1;
    }
    
    cin >> p;
    
    while (p--) {
        int possible = 1;
        
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> c[i];
            
            if (i) {
                possible &= grid[c[i - 1]][c[i]];
            }
        }
        
        total_possible += possible;
    }
    
    cout << total_possible << "\n";
}
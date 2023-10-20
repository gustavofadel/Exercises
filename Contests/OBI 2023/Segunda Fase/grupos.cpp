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

const int N = 1e6 + 10;

void set_IO (string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int a, b, c, d, e, group[N], m, violated_restrictions;
vector<ii> dont_like, like;

int main () {_
    cin >> e >> m >> d;
    
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        like.pb({a, b});
    }
    
    for (int i = 0; i < d; i++) {
        cin >> a >> b;
        dont_like.pb({a, b});
    }
    
    for (int i = 1; i <= e / 3; i++) {
        cin >> a >> b >> c;
        group[a] = group[b] = group[c] = i;
    }
    
    for (int i = 0; i < m; i++) {
        if (group[like[i].fi] != group[like[i].se]) {
            violated_restrictions++;
        }
    }
    
    for (int i = 0; i < d; i++) {
        if (group[dont_like[i].fi] == group[dont_like[i].se]) {
            violated_restrictions++;
        }
    }
    
    cout << violated_restrictions << "\n";
}
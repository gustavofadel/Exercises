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

int t;
ll n;

int main () {_
    cin >> t;
    
    /* 
        Soma da progressão aritmética das linhas = número de guerreiros
        linhas * (linhas - 1) / 2 = n
        linhas^2 - linhas - 2n = 0
        delta = (-1)^2 - 4 * 1 * (-2n) = 1 + 8n
        linhas = (-(-1) + sqrt(delta)) / 2 = (1 + sqrt(delta)) / 2
    */
    while (t--) cin >> n, cout << ll((sqrt(n * 8 + 1) - 1) / 2) << "\n";
}
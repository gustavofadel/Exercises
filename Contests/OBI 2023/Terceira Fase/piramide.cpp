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

void set_IO (string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

vector<int> x(6);

int main () {_
    for (int i = 0; i < 6; i++) {
        cin >> x[i];
    }
    
    sort(all(x));
    
    do {
        if (x[0] + x[1] + x[2] == x[5] && x[3] + x[4] == x[5]) {
            return !(cout << "S\n");
        }
    } while (next_permutation(all(x)));
    
    cout << "N\n";
}
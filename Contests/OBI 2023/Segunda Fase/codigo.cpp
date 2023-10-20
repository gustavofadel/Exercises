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

void set_IO (string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int n;
pair<char, int> current;
string c;

int main () {_
    cin >> n >> c;
    
    current = {c[0], 1};
    
    for (int i = 1; i <= n; i++) {
        if (i == n || c[i] != current.fi) {
            cout << current.se << " " << current.fi << " ";
            current.se = 1;
        }
        
        else {
            current.se++;
        }
        
        current.fi = c[i];
    }
    
    cout << "\n";
}
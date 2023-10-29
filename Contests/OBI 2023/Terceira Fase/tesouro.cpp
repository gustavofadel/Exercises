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

int a, b, m, time_to_reach, visited[N][N];
string r[N];

int main () {_
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        cin >> r[i];
    }
    
    cin >> a >> b;
    
    a--; b--;
    
    while (1) {
        if (!(0 <= a && a < m && 0 <= b && b < m)) {
            return !(cout << "-1\n");
        }
        
        if (visited[a][b]) {
            return !(cout << "0\n");
        }
        
        if (r[a][b] == 'X') {
            return !(cout << time_to_reach << "\n");
        }
        
        time_to_reach++;
        visited[a][b] = 1;
        
        if (r[a][b] == 'N') {
            a--;
        }
        
        else if (r[a][b] == 'S') {
            a++;
        }
        
        else if (r[a][b] == 'L') {
            b++;
        }
        
        else  {
            b--;
        }
    }
}
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

const int N = 2e1 + 10;

int c, cnt, r, x, y;
string grid[N];

int valid (int x, int y) {
    return 0 <= x && x < r && 0 <= y && y < c;
}

int main () {_
    cin >> r >> c;
    for (int i = 0; i < r; i++) cin >> grid[i];
    while (true) {
        if (!valid(x, y)) return !(cout << "Out\n");
        if (cnt > 2 * r * c) return !(cout << "Lost\n");
        switch (grid[x][y]) {
            case 'N':
                x--; break;
            case 'E':
                y++; break;
            case 'S':
                x++; break;
            case 'W':
                y--; break;
            case 'T':
                return !(cout << cnt << "\n");
        }
        cnt++;
    }
}
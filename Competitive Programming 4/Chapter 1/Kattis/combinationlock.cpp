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

int comb[3], deg, pos;

int cw (int st, int en) {
    return 9 * ((st - en + 40) % 40);
}

int ccw (int st, int en) {
    return 9 * ((en - st + 40) % 40);
}

int main () {_
    while (cin >> pos >> comb[0] >> comb[1] >> comb[2] && (pos || comb[0] || comb[1] || comb[2])) {
        deg = 720;
        deg += cw(pos, comb[0]), pos = comb[0];
        deg += 360;
        deg += ccw(pos, comb[1]), pos = comb[1];
        deg += cw(pos, comb[2]);
        cout << deg << "\n";
    }
}
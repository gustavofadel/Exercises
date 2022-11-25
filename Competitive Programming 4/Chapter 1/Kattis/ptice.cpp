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

const int N = 5e2 + 10;

int a_pts, b_pts, g_pts, mx, n;
string a_s, b_s, g_s, s;

int main () {_
    cin >> n >> s;
    while (a_s.size() < s.size()) a_s += "ABC";
    while (b_s.size() < s.size()) b_s += "BABC";
    while (g_s.size() < s.size()) g_s += "CCAABB";
    for (int i = 0; i < n; i++) a_pts += a_s[i] == s[i], b_pts += b_s[i] == s[i], g_pts += g_s[i] == s[i];
    mx = max({a_pts, b_pts, g_pts});
    cout << mx << "\n";
    if (a_pts == mx) cout << "Adrian\n";
    if (b_pts == mx) cout << "Bruno\n";
    if (g_pts == mx) cout << "Goran\n";
}
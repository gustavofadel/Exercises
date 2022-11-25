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

int cnt, lr, n, tb;
string s;

int main () {_
    cin >> n;
    while (n--) cin >> s, tb += (s[0] == '0') + (s[1] == '0'), lr += (s[2] == '0') + (s[3] == '0');
    while (tb >= 2 && lr >= 2) cnt++, tb -= 2, lr -= 2;
    cout << cnt << " " << tb << " " << lr << "\n";
}
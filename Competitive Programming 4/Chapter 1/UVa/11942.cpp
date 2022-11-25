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

int is_decr, is_incr, n;
vector<int> a(10), decr(10), incr(10);

int main () {_
   cin >> n, cout << "Lumberjacks:\n";
   while (n--) {
       for (int i = 0; i < 10; i++) cin >> a[i];
       decr = incr = a, is_decr = is_incr = 1;
       sort(all(incr)), sort(all(decr), greater<int>());
       for (int i = 0; i < 10; i++) is_decr &= (a[i] == decr[i]), is_incr &= (a[i] == incr[i]);
       cout << (is_decr || is_incr ? "Ordered" : "Unordered") << "\n";
   }
}
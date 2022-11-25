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

int a, b;
string s;

int main () {_
   cin >> s;
   for (int i = 0; i < s.size(); i += 2) {
       if (s[i] == 'A') a += s[i + 1] - '0';
       else b += s[i + 1] - '0';
       if (a >= 11 && a - b >= 2) return !(cout << "A\n");
       else if (b >= 11 && b - a >= 2) return !(cout << "B\n");
   }
}
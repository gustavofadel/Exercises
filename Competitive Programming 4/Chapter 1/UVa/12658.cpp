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

const int N = 5e1 + 10;

int n;
map<string, int> num;
string s[5];

int main () {_
   num[".*..*..*..*..*."] = 1, num["***..*****..***"] = 2, num["***..****..****"] = 3;
   cin >> n;
   for (int i = 0; i < 5; i++) cin >> s[i];
   for (int k = 0; k < 4 * n; k += 4) {
       string cur = "";
       for (int i = 0; i < 5; i++) {
           for (int j = k; j <= k + 2; j++) {
               cur += s[i][j];
           }
       }
       cout << num[cur];
   }
   cout << "\n";
}
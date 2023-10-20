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

int interval_start, last_occurrence[N], longest_distinct_interval_length, n, sequence[N];

int main () {_
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> sequence[i];
        
        if (last_occurrence[sequence[i]] >= interval_start) {
            interval_start = last_occurrence[sequence[i]] + 1;
        }
        
        longest_distinct_interval_length = max(longest_distinct_interval_length, i - interval_start + 1);
        last_occurrence[sequence[i]] = i;
    }
    
    cout << longest_distinct_interval_length << "\n";
}
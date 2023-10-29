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

int f[N], m, n, t[N];
ll smallest_total_waiting_time;
priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> waiting_queue;

int main () {_
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        cin >> t[i];
    }
    
    for (int i = 1; i <= m; i++) {
        cin >> f[i];
    }
    
    sort(t + 1, t + n + 1, greater<int>());
    sort(f + 1, f + m + 1);
    
    for (int i = 1; i <= m; i++) {
        waiting_queue.push({0, i});
    }
    
    for (int i = 1; i <= n; i++) {
        auto [accumulated_work_factor, mechanic_id] = waiting_queue.top(); waiting_queue.pop();
        smallest_total_waiting_time += accumulated_work_factor * t[i];
        waiting_queue.push({accumulated_work_factor + f[mechanic_id], mechanic_id});
    }
    
    cout << smallest_total_waiting_time << "\n";
}
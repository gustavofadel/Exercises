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

int a, b, checked_other_transport_modes[N], k, m, n, t, u, v;
ll p[N];
map<ii, int> visited;
map<ii, vi> graph;
map<int, int> has_type[N];
priority_queue<pair<ll, ii>, vector<pair<ll, ii>>, greater<pair<ll, ii>>> stations_queue;

int main () {_
    cin >> n >> m >> k;
    
    for (int i = 1; i <= k; i++) {
        cin >> p[i];
    }
    
    for (int i = 1; i <= m; i++) {
        cin >> v >> u >> t;
        graph[{v, t}].pb(u);
        graph[{u, t}].pb(v);
        has_type[v][t] = has_type[u][t] = 1;
    }
    
    cin >> a >> b;
    
    stations_queue.push({0, {a, 0}});
    
    while (!stations_queue.empty()) {
        auto [current_cost, current_station] = stations_queue.top(); stations_queue.pop();
        auto [station_number, transport_mode] = current_station;
        
        if (station_number == b) {
            return !(cout << current_cost << "\n");
        }
        
        if (visited[current_station]) {
            continue;
        }
        
        visited[current_station] = 1;
        
        if (!checked_other_transport_modes[station_number]) {
            checked_other_transport_modes[station_number] = 1;
            
            for (auto [other_transport_mode, __]: has_type[station_number]) {
                stations_queue.push({current_cost + p[other_transport_mode], {station_number, other_transport_mode}});
            }
        }
        
        for (int next_station: graph[current_station]) {
            stations_queue.push({current_cost, {next_station, transport_mode}});
        }
    }
    
    cout << "-1\n";
}
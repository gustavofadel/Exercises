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

const int N = 1e2 + 10;

int mat[N][N], n;
ii nxt[] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int is_valid (ii u) {
    return 0 <= u.fi && u.fi < n && 0 <= u.se && u.se < n;
}

int dijkstra (ii st, ii en) {
    int dist[n][n];
    priority_queue<pair<int, ii>, vector<pair<int, ii>>, greater<pair<int, ii>>> pq;
    
    memset(dist, INF, sizeof(dist));
    pq.push({0, st});
    dist[st.fi][st.se] = 0;
    
    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        
        if (u == en) return d;
        
        // A lista de adjacências vai ser para as quatro direções (norte, leste, sul e oeste)
        for (auto [nx, ny]: nxt) {
            ii v = {u.fi + nx, u.se + ny};
            
            if (is_valid(v) && d + mat[v.fi][v.se] < dist[v.fi][v.se]) {
                dist[v.fi][v.se] = d + mat[v.fi][v.se];
                pq.push({d + mat[v.fi][v.se], v});
            }
        }
    }
}

int main () {_
    cin >> n;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> mat[i][j];
    // Usei Dijkstra para encontrar o caminho com o menor peso
    // A posição livre tem peso 0 e a com obstáculo tem peso 1
    cout << dijkstra({0, 0}, {n - 1, n - 1}) << "\n";
}
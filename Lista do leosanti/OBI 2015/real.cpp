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

const int N = 1e4 + 10;

int compareceu[N], m, n, primeiro = 1, u;
vi adj[N], anterior = {0};

int main () {_
    cin >> n >> m;
    // Li a entrada como se fosse um grafo direcionado
    for (int v = 1; v <= n; v++) cin >> u, adj[u].pb(v);
    while (m--) cin >> u, compareceu[u] = 1;
    // Faço uma espécie de travessia por camadas pelo grafo
    // A 1ª é a dos filhos do rei, a 2ª dos netos, 3ª bisnetos, etc.
    while (true) {
        int vieram = 0;
        vi atual;
        
        // Vai na geração anterior e adiciona os filhos de todos dessa geração
        for (int u: anterior) 
            for (int v: adj[u])
                atual.pb(v);
        
        // Se a geração anterior não teve filhos, encerra o loop
        if (atual.empty()) break;
        
        // Verifica dessa geração atual quem veio
        for (int u: atual) 
            if (compareceu[u])
                vieram++;
                
        if (!primeiro) cout << " ";
        else primeiro = 0;
        
        // Imprime a porcentagem dos que vieram
        cout << fixed << setprecision(2) << 100.0 * vieram / atual.size();
        
        // A geração atual passará a ser a geração passada
        anterior = atual;
    }
    
    cout << "\n";
}
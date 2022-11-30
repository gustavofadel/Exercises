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

int m, n;
ll total;

int main () {_
    cin >> n >> m;
    
    // Caso em que todos recebem a quantidade máxima e aindam restam palitos
    if (3 * m < n) return !(cout << "0\n");
    
    // Simula todas as possibilidades para o primeiro amigo
    for (int i = 1; i <= m; i++) {
        // O restante para dividir com os outros amigos
        int restante = n - i;
        
        // Caso em que os outros amigos recebem a quantidade máxima e aindam restam palitos
        if (2 * m < restante) continue;
        
        // O segundo amigo tem que pegar pelo menos 1 palito e também deixar, no máximo, m palitos para o outro pegar
        int minimo = max(1, restante - m);
        // O segundo amigo tem que pegar, no máximo, m palitos e também tem que deixar pelo menos 1 palito para o outro pegar
        int maximo = min(m, restante - 1);
        
        // Adiciona ao total o número de maneiras que o segundo (e consequentemente o terceiro) tem para pegar os palitos, quando o primeiro pega i palitos
        total += maximo - minimo + 1;
    }
    
    cout << total << "\n";
}
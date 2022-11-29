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

int m, n, res[N], tam, x[N], y[N];

int main () {_
    cin >> m >> n;
    for (int i = 0; i < m; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> y[i];
    // A questão consiste em fazer uma "quase soma binária"
    // A diferença é que a leitura é feita da esquerda pra direita
    for (int i = 0; i < min(m, n); i++) res[i] = x[i] + y[i];
    // Adiciona o restante dos dígitos do maior número no vetor de resposta
    if (m > n) for (int i = n; i < m; i++) res[i] = x[i];
    else for (int i = m; i < n; i++) res[i] = y[i];
    // Verifica, da direita pra esquerda, as operações "vai um" que precisam ser feitas
    for (int i = max(m, n); i >= 0; i--) if (res[i] >= 2) res[i] -= 2, res[i - 1]++;
    // Desconsidera os dígitos 0 que vêm depois do último 1, já que o último dígito é sempre 1
    for (int i = 0; i < max(m, n); i++) if (res[i]) tam = i;
    for (int i = 0; i <= tam; i++) cout << res[i] << " \n"[i == tam];
}
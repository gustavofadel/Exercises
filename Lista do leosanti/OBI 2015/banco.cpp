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

const int N = 5e3 + 10;

int qtd[6], s, val[] = {2, 5, 10, 20, 50, 100};
// dp[i][j] = Formas distintas de entregar o saque de valor i do tipo j em diante (j é a posição do vetor val[])
ll dp[N][6];

// Abordagem top-down
// i = valor restante do saque, j = índice do tipo no vetor val[]
ll solve (int i, int j) {
    // Só há 1 maneira de se obter o valor 0
    if (i == 0) return 1;
    // Retorna 0 se a quantidade de dinheiro for negativa ou terminou de ver todos os tipos
    if (i < 0 || j > 5) return 0;
    // Verifica se o resultado está na tabela de memoização
    if (~dp[i][j]) return dp[i][j];
    
    // Variável que está armazenadas a quantidade de possibilidades
    ll tot = 0;
    
    // É possível pegar desde nenhuma cédula de val[j] até todas as cédulas de val[j], que é a qtd[j]
    // Itera até a qtd[j] * val[j] ultrapassar o valor do dinheiro que foi passado como parâmetro (i)
    for (int k = 0; k <= qtd[j] && k * val[j] <= i; k++) {
        // Subtrai o valor i da quantidade de cédulas escolhidas com o valor atual e passa para o próximo tipo
        tot += solve(i - k * val[j], j + 1); 
    }
    
    return dp[i][j] = tot;
}

int main () {_
    cin >> s;
    for (int i = 0; i < 6; i++) cin >> qtd[i];
    memset(dp, -1, sizeof(dp));
    // Começa a chamada com todo o valor s disponível e começando a divisão a partir do primeiro tipo (val[0])
    cout << solve(s, 0) << "\n";
}
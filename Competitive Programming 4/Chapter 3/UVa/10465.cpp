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

int dp[N], m, n, t;

int main () {_
    while (cin >> m >> n >> t) {
        int sobrando = 0;
        
        mset(dp, 0);
        
        for (int i = 1; i <= t; i++) {
            // Verfica se pode comer o próximo hamburguer do tipo 1
            int tipo1 = (i - m >= 0 ? dp[i - m] + !!~dp[i - m] : -1);
            
            // Verfica se pode comer o próximo hamburguer do tipo 2
            int tipo2 = (i - n >= 0 ? dp[i - n] + !!~dp[i - n] : -1);
            
            // Verifica se é melhor comer o tipo 1 ou o tipo 2
            dp[i] = max(tipo1, tipo2);
        }
        
        // Verifica se ainda tem tempo sobrando pra beber
        while (!~dp[t]) t--, sobrando++;
        
        cout << dp[t];
        
        if (sobrando) cout << " " << sobrando;
        
        cout << "\n";
    }
}
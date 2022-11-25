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

const int N = 5e2 + 10;

void Solve () {
    int M = 6, L = 10, W = 6;
    while (1) {
        int result = Theory(M, L, W);
        // O palpite para o assassino estava errado
        if (result == 1) M--;
        // O palpite para o local estava errado
        else if (result == 2) L--;
        // O palpite para a arma estava errado
        else if (result == 3) W--;
        // A teoria estava certa
        else return;
    }
}

int main () {_
    Solve();
}
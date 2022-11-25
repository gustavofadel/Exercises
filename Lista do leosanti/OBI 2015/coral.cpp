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

int a[5], ok;
map<int, int> pos;

int main () {_
    for (int i = 1; i <= 4; i++) {
        cin >> a[i];
        // Se o número já tiver apareceido antes, verifica se eles estão a 2 posições de distância, que é uma característica da verdadeira
        if (pos[a[i]] && i - pos[a[i]] == 2) ok = 1;
        else pos[a[i]] = i;
    }
    cout << "FV"[ok] << "\n";
}
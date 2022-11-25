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

void play () {
    map<char, ii> pos;
    for (char c = 'A'; c <= 'Z'; c++) pos[a] = mp(-1, -1);
    // Primeiro loop vai procurar as duas posições de cada letra
    for (int i = 1; i <= 50; i++) {
        char c = faceup(i);
        if (~pos[c].fi) pos[c].se = i;
        else pos[c].fi = i;
    }
    // Como já sabemos as posições de todas as letras, o segundo loop é pra ganhar os doces
    for (char c = 'A'; c <= 'Z'; c++) faceup(pos[c].fi), faceup(pos[c].se);
}

int main () {_
    play();
}